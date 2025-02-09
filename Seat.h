#pragma once
#include "iostream"
#include "sstream"
using namespace std;
// Asiento tiene un avion asignado por su lista de asientos
class Seat {
private:
	int seatNumber;
public:
	Seat();
	Seat(int);
	~Seat();
	int getSeatNumber();
	void setSeatNumber(int);
	string toString();
};