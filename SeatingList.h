#pragma once
#include "SeatNode.h"

class SeatingList{
private:
	SeatNode * first;
	SeatNode * actual;
public:
	SeatingList();
	~SeatingList();
	SeatNode * getFirst();
	SeatNode * getActual();
	void addToBeginning(Seat *);
	void addToTheEnd(Seat *);
	void deleteBeginning();
	void deleteEnd();
	void insertPosition(Seat *, int);
	void deletePosition(int);
	int nodeQuantity();
	string toString();
};