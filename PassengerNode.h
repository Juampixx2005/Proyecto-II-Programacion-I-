#pragma once
#include "Passenger.h"

class PassengerNode{
private:
	Passenger * charge;
	PassengerNode* next;
public:
	PassengerNode();
	PassengerNode(Passenger *, PassengerNode*);
	~PassengerNode();
	Passenger * getCharge();
	PassengerNode * getNext();
	void setCharge(Passenger *);
	void setNext(PassengerNode*);
};