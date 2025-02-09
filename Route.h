#pragma once
#include "Hour.h"

class Route {
private:
	string name;
	string origin;
	string destiny;
	Hour * duration;
	int scalesQuantity;
	float ticketValue;
public:
	Route();
	Route(string, string, string, Hour * , int, float);
	~Route();
	string getName();
	string getOrigin();
	string getArrival();
	Hour * getDuration();
	int getScalesQuantity();
	float getTicketValue();
	void setName(string);
	void setOrigin(string);
	void setDestiny(string);
	void setDuration(Hour *);
	void setScalesQuantity(int);
	void setTicketValue(float);
	string toString();
};
