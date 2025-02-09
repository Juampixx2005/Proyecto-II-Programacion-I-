#pragma once
#include "Person.h"

class Crew : public Person {
protected:
	int age;
public:
	Crew();
	Crew(string, int, int);
	virtual ~Crew();
	int getAge();
	void setAge(int);
	virtual string toString() = 0; //Clase abstracta
};
