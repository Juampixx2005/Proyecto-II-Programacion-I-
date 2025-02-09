#include "Crew.h"

Crew::Crew() : Person() {
	age = 0;
}

Crew::Crew(string name, int id, int age) : Person(name, id) {
	this->age = age;
}

Crew::~Crew() {}

int Crew::getAge() {
	return age;
}

void Crew::setAge(int age) {
	this->age = age;
}
