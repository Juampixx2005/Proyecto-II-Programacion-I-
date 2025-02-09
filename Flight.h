#pragma once
#include "Route.h"
#include "Plane.h"
#include "PassengerList.h"
class Flight {
private:
	string name;
	Route * asignatedRoute;
	string departureDate;
	string arrivalDate;
	Hour * departureTime;
	Hour * arrivalTime;
	string departureAirport;
	string arrivalAirport;
	Pilot * asignatedPilot;
	Plane * asignatedPlane;
	PassengerList * passengers;
public:
	Flight();
	Flight(string, Route *,string, string, Hour *, Hour *, string,
		string ,Pilot *,Plane *, PassengerList *);
	~Flight();
	string getName();
	Route * getAsignatedRoute();
	string getDepartureDate();
	string getArrivalDate();
	Hour * getDepartureTime();
	Hour * getArrivalTime();
	string getDepartureAirport();
	string getArrivalAirport();
	Pilot * getAsignatedPilot();
	Plane * getAsignatedPlane();
	PassengerList * getPassengers();
	void setName(string);
	void setAsignatedRoute(Route *);
	void setDepartureDate(string);
	void setArrivalDate(string);
	void setDepartureTime(Hour *);
	void setArrivalTime(Hour *);
	void setDepartureAirport(string);
	void setArrivalAirport(string);
	void setAsignatedPilot(Pilot *);
	void setAsignatedPlane(Plane *);
	void setPassengers(PassengerList *);
	string toString();
};
