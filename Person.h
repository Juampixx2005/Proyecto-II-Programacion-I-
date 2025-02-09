#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class Person {
protected:
	string name;
	int id;
public:
	Person();
	Person(string, int);
	virtual ~Person();
	string getName();
	int getId();
	void setName(string);
	void setId(int);
	virtual string toString() = 0; //clase abstracta
};
