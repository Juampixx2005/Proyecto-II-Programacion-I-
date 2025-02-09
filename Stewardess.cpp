#include "Stewardess.h"

Stewardess::Stewardess() : Crew() {
	titule = " ";
	phoneNumber = 0.0f;
	grade = 0;
}

Stewardess::Stewardess(string titule, float phoneNumber, int grade, string name, int id, int age)
	:Crew(name, id, age) {
	this->titule = titule;
	this->phoneNumber = phoneNumber;
	this->grade = grade;
}

Stewardess::~Stewardess(){
}

string Stewardess::getTitule() {
	return titule;
}
float Stewardess::getPhoneNumber() {
	return phoneNumber;
}
int Stewardess::getGrade() {
	return grade;
}
void Stewardess::setTitule(string titule) {
	this->titule = titule;
}
void Stewardess::setPhoneNumber(float phoneNumber) {
	this->phoneNumber = phoneNumber;
}
void Stewardess::setGrade(int grade) {
	this->grade = grade;
}
string Stewardess::toString() {
	stringstream ss;
	ss << "-- Stewardess Information --\n"
		<< "Name: " << name << "." << endl
		<< "ID: " << id << "." << endl
		<< "Age: " << age << "." << endl
		<< "Titule: " << titule << "." << endl
		<< "Phone Number: " << phoneNumber << endl
		<< "Grade: " << grade << endl
		<< "----------------------------\n";
	return ss.str();
}
