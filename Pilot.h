#pragma once
#include "Crew.h"

class Pilot : public Crew {
private:
	string email;
	char gender;
public:
	Pilot();
	Pilot(string, int, int, string, char);
	~Pilot();
	string getEmail();
	char getGender();
	void setEmail(string);
	void setGender(char);
	string toString() override;
};

