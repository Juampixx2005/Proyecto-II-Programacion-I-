#include "Flight.h"

Flight::Flight() {
	name = " ";
	asignatedRoute = nullptr;
	departureDate = " ";
	arrivalDate = " ";
	departureTime = nullptr;
	arrivalTime = nullptr;
	departureAirport = " ";
	arrivalAirport = " ";
	asignatedPilot = nullptr;
	asignatedPlane = nullptr;
	passengers = nullptr;
}
Flight::Flight(string name, Route * asignatedRoute,string departureDate, string arrivalDate,
	Hour * departureTime, Hour * arrivalTime, string departureAirport, string arrivalAirport
	, Pilot * asignatedPilot, Plane * asignatedPlane, PassengerList* passengers ) {
		this->name = name;
		this->asignatedRoute = asignatedRoute;
		this->departureDate = departureDate;
		this->arrivalDate = arrivalDate;
		this->departureTime = departureTime;
		this->arrivalTime = arrivalTime;
		this->departureAirport = departureAirport;
		this->arrivalAirport = arrivalAirport;
		this->asignatedPilot = asignatedPilot;
		this->asignatedPlane = asignatedPlane;
		this->passengers = passengers;
}
Flight::~Flight() {
	delete asignatedRoute;
	delete departureTime;
	delete arrivalTime;
	delete asignatedPilot;
	delete asignatedPlane;
	delete passengers;
}
string Flight::getName(){
	return name;
}
Route * Flight::getAsignatedRoute() {
	return asignatedRoute;
}
string Flight::getDepartureDate() {
	return departureDate;
}
string Flight::getArrivalDate() {
	return arrivalDate;
}
Hour * Flight::getDepartureTime() {
	return departureTime;
}
Hour * Flight::getArrivalTime() {
	return arrivalTime;
}
string Flight::getDepartureAirport() {
	return departureAirport;
}
string Flight::getArrivalAirport() {
	return arrivalAirport;
}
Pilot * Flight::getAsignatedPilot() {
	return asignatedPilot;
}
Plane * Flight::getAsignatedPlane() {
	return asignatedPlane;
}
PassengerList * Flight::getPassengers() {
	return passengers;
}
void Flight::setName(string name){
	this->name = name;
}
void Flight::setAsignatedRoute(Route * asignatedRoute) {
	this->asignatedRoute = asignatedRoute;
}
void Flight::setDepartureDate(string departureDate) {
	this->departureDate = departureDate;
}
void Flight::setArrivalDate(string arrivalDate) {
	this->arrivalDate = arrivalDate;
}
void Flight::setDepartureTime(Hour * departureTime) {
	this->departureTime = departureTime;
}
void Flight::setArrivalTime(Hour * arrivalTime) {
	this->arrivalTime = arrivalTime;
}
void Flight::setDepartureAirport(string departureAirport) {
	this->departureAirport = departureAirport;
}
void Flight::setArrivalAirport(string arrivalAirport) {
	this->arrivalAirport = arrivalAirport;
}
void Flight::setAsignatedPilot(Pilot * asignatedPilot) {
	this->asignatedPilot = asignatedPilot;
}
void Flight::setAsignatedPlane(Plane * asignatedPlane) {
	this->asignatedPlane = asignatedPlane;
}
void Flight::setPassengers(PassengerList * passengers) {
	this->passengers = passengers;
}
string Flight::toString() {
	stringstream ss;
	ss << "------ Flight information ------\n"
		<< "Asignated Route: " << asignatedRoute->toString() << "." << endl
		<< "Departure Date: " << departureDate << "." << endl
		<< "Arrival Date: " << arrivalDate << "." << endl
		<< "Departure Time: " << departureTime->toString() << "." << endl
		<< "Arrival Time: " << arrivalTime->toString() << "." << endl
		<< "Departure Airport: " << departureAirport << "." << endl
		<< "Arrival Airport: " << arrivalAirport << "." << endl
		<< "Departure Airport: " << departureAirport << "." << endl
		<< "Asignated Pilot: " << asignatedPilot->toString() << "." << endl
		<< "Asignated Plane: " << asignatedPlane->toString() << "." << endl
		<< "Quantity of passengers: " << passengers->nodeQuantity() << "." << endl
		<< "-------------------------------\n";
		return ss.str();
}