#include "Pilot.h"

Pilot::Pilot() : Crew() {
	email = "";
	gender = ' ';
}
Pilot::Pilot(string name, int id, int age, string email, char gender)
: Crew(name, id, age) {
	this->email = email;
	this->gender = gender;
}
Pilot::~Pilot() {}
string Pilot::getEmail() {
	return email;
}
char Pilot::getGender() {
	return gender;
}
void Pilot::setEmail(string email) {
	this->email = email;
}
void Pilot::setGender(char gender) {
	this->gender = gender;
}
string Pilot::toString() {
	stringstream  ss;
	ss << "-- Pilot Information --\n"
		<< "Name: " << name << "." << endl
		<< "ID: " << id << "." << endl
		<< "Age: " << age << "." << endl
		<< "Email: " << email << endl
		<< "Gender: " << gender << "." << endl
		<< "-----------------------\n";
	return ss.str();
}