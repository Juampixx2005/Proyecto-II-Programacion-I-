#pragma once
#include "Crew.h"

class Stewardess : public Crew {
private:
	string titule;
	float phoneNumber;
	int grade;
public:
	Stewardess();
	Stewardess(string, float, int, string, int, int);
	~Stewardess();
	string getTitule();
	float getPhoneNumber();
	int getGrade();
	void setTitule(string);
	void setPhoneNumber(float);
	void setGrade(int);
	string toString() override;
};

