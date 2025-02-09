#pragma once
#include "Flight.h"

class FlightManagement {
private:
    Flight** flights;
    int flightCount;
    int flightSize;

public:
    FlightManagement();
    ~FlightManagement();
    void addFlight(string, Route*, string, string,
		Hour*, Hour*, string, string, Pilot*, Plane*, PassengerList*);
    void addFlight(Flight*);
    void deleteFlight(string name);
    string displayAllFlights();
    void modifyFlight(string, Route*, string, string,
		Hour*, Hour*, string, string, Pilot*, Plane*, PassengerList*);

    Flight* findFlight(string name);
    string toStringSingleFlight(string name);
};
