#pragma once
#include "SeatingList.h"
#include "Pilot.h"
#include "Stewardess.h"

class Plane {
private:
	string category; //(Plane code)
	string brand;
	float chargeCapacity; //(cubic meters)
	bool military;
	float distanceRange; // Scope
	SeatingList * seating;
	Pilot * assignedPilot;
	Pilot * assignedCopilot;
	Stewardess * assignedStewardess1;
	Stewardess * assignedStewardess2;
	Stewardess * assignedStewardess3;

public:
	Plane();
	Plane(string, string, float, bool, float , SeatingList *, Pilot * , Pilot * , Stewardess * ,
	Stewardess * , Stewardess * );
	~Plane();
	string getCategory();
	string getBrand();
	float getChargeCapacity();
	bool getMilitary();
	float getDistanceRange();
	SeatingList * getSeating();
	Pilot * getPilot();
	Pilot * getCopilot();
	Stewardess * getAssignedStewardess1();
	Stewardess * getAssignedStewardess2();
	Stewardess * getAssignedStewardess3();
	void setCategory(string);
	void setBrand(string);
	void setChargeCapacity(float);
	void setMilitary(bool);
	void setDistanceRange(float);
	void setSeatingList( SeatingList *);
	void setPilot(Pilot*);
	void setCopilot(Pilot*);
	void setAssignedStewardess1(Stewardess*);
	void setAssignedStewardess2(Stewardess*);
	void setAssignedStewardess3(Stewardess*);
	string toString();
};