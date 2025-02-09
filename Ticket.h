#pragma once
#include "Seat.h"

using namespace std;

class Ticket {
private:
	int linkedSeatNumber;	
	Seat * assignatedSeat;
public:
	Ticket();
	Ticket(int, Seat *);
	~Ticket();
	Seat * getAssignatedSeat();
	int getSeatNumber();
	void setAssignatedSeat(Seat *);
	void setSeatNumber(int);
	string toString();
};