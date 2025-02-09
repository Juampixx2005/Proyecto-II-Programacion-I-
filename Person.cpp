#include "Person.h"

Person::Person() {
	name = "";
	id = 0;
}
Person::Person(string name, int id) {
	this->name = name;
	this->id = id;
}
Person::~Person() {}
string Person::getName() {
	return name;
}
int Person::getId() {
	return id;
}
void Person::setName(string name) {
	this->name = name;
}
void  Person::setId(int id) {
	this->id = id;
}

