#pragma once
#include "Seat.h"

class SeatNode{
private:
	Seat * charge;
	SeatNode* next;
public:
	SeatNode();
	SeatNode(Seat *, SeatNode *);
	~SeatNode();
	Seat* getCharge();
	SeatNode* getNext();
	void setCharge(Seat*);
	void setNext(SeatNode*);
};