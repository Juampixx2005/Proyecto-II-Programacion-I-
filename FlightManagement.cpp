#include "FlightManagement.h"

FlightManagement::FlightManagement() {
    flightCount = 0;
    flightSize = 10;
    flights = new Flight * [flightSize];
    for (int i = 0; i < flightSize; i++) {
        flights[i] = nullptr;
    }
}

FlightManagement::~FlightManagement() {
    for (int i = 0; i < flightCount; i++) {
        delete flights[i];
    }
    delete[] flights;
}

void FlightManagement::addFlight(string name, Route* asignatedRoute, string departureDate, string arrivalDate,
	Hour* departureTime, Hour* arrivalTime, string departureAirport, string arrivalAirport
	, Pilot* asignatedPilot, Plane* asignatedPlane, PassengerList* passengers) {
	if (flightCount < flightSize) {
		flights[flightCount] = new Flight(name, asignatedRoute, departureDate, arrivalDate,
			departureTime, arrivalTime, departureAirport, arrivalAirport
			, asignatedPilot, asignatedPlane, passengers);
		flightCount++;
	}
}

void FlightManagement::addFlight(Flight* newFlight){
    if (flightCount < flightSize) {
        flights[flightCount] = newFlight;
        flightCount++;
    }
}

void FlightManagement::deleteFlight(string name) {
    for (int i = 0; i < flightCount; i++) {
        if (flights[i]->getName() == name) {
            delete flights[i];
            for (int j = i; j < flightCount - 1; j++) {
                flights[j] = flights[j + 1];
            }
            flightCount--;
        }
    }
}

string FlightManagement::displayAllFlights() {
    stringstream ss;
    ss << "Name | Origin | Destiny | DepartureT | ArrivalT | Duration | Airport Depart | Airport Arrive\n";
    for (int i = 0; i < flightCount; i++) {
        ss << flights[i]->getName() << " | "
            << flights[i]->getAsignatedRoute()->getOrigin() << " | "
            << flights[i]->getAsignatedRoute()->getArrival() << " | "
            << flights[i]->getDepartureTime()->toString() << " | "
            << flights[i]->getArrivalTime()->toString() << " | "
            << flights[i]->getAsignatedRoute()->getDuration()->toString() << " | "
            << flights[i]->getDepartureAirport() << " | "
            << flights[i]->getArrivalAirport() << endl;
    }
    return ss.str();
}

void FlightManagement::modifyFlight(string name, Route* asignatedRoute, string departureDate, string arrivalDate,
	Hour* departureTime, Hour* arrivalTime, string departureAirport, string arrivalAirport
	, Pilot* asignatedPilot, Plane* asignatedPlane, PassengerList* passengers) {
    for (int i = 0; i < flightCount; i++) {
        if (flights[i]->getName() == name) {
            flights[i]->setAsignatedRoute(asignatedRoute);
			flights[i]->setDepartureDate(departureDate);
			flights[i]->setArrivalDate(arrivalDate);
			flights[i]->setDepartureTime(departureTime);
			flights[i]->setArrivalTime(arrivalTime);
			flights[i]->setDepartureAirport(departureAirport);
			flights[i]->setArrivalAirport(arrivalAirport);
			flights[i]->setAsignatedPilot(asignatedPilot);
			flights[i]->setAsignatedPlane(asignatedPlane);
			flights[i]->setPassengers(passengers);
        }
    }
}

Flight* FlightManagement::findFlight(string name) {
    for (int i = 0; i < flightCount; i++) {
        if (flights[i]->getName() == name) {
            return flights[i];
        }
    }
    return nullptr;
}

string FlightManagement::toStringSingleFlight(string name) {
    /*stringstream ss;
    for (int i = 0; i < flightCount; i++) {
        if (flights[i]->getName() == name) {
            ss << "-- Flight Info --\n"
                << "Flight Name: " << flights[i]->getName() << "\n"
                << "Origin: " << flights[i]->getOrigin() << "\n"
                << "Destiny: " << flights[i]->getArrival() << "\n"
                << "Departure Time: " << flights[i]->getDepartureTime()->toString() << "\n"
                << "Arrival Time: " << flights[i]->getArrivalTime()->toString() << "\n"
                << "Route Duration: " << flights[i]->getRoute()->getDuration()->toString() << "\n"
                << "Departure Airport: " << flights[i]->getDepartureAirport() << "\n"
                << "Arrival Airport: " << flights[i]->getArrivalAirport() << "\n"
                << "Assigned Pilot: " << flights[i]->getAssignedPilot()->getName() << "\n"
                << "Assigned Plane: " << flights[i]->getAssignedPlane()->getCategory() << "\n"
                << "Passenger Count: " << flights[i]->getPassengers()->nodeQuantity() << "\n";
            return ss.str();
        }
    }
    return "Flight not found.\n";*/
    Flight* flight = findFlight(name);
    if(flight){
        return flight->toString();}
    else{
        return "Flight not found.\n";}
}
