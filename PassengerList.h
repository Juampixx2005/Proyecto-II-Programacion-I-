#pragma once
#include "PassengerNode.h"

class PassengerList {
private:
	PassengerNode * first;
	PassengerNode * actual;
public:
	PassengerList();
	~PassengerList();
	PassengerNode * getFirst();
	PassengerNode * getActual();
	void addToBeginning(Passenger *);
	void addToTheEnd(Passenger *);
	void deleteBeginning();
	void deleteEnd();
	void insertPosition(Passenger *, int);
	void deletePosition(int);
	int nodeQuantity();
	string toString();
};