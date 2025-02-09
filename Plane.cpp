#include "Plane.h"

Plane::Plane() {
	category = " ";
	brand = " ";
	chargeCapacity = 0;
	military = 0;
	distanceRange = 0.0f;
	seating = nullptr;
	assignedPilot = nullptr;
	assignedCopilot = nullptr;
	assignedStewardess1 = nullptr;
	assignedStewardess2 = nullptr;
	assignedStewardess3 = nullptr;
}
Plane::Plane(string category, string brand, float chargeCapacity,
	bool military, float distanceRange, SeatingList * seating, 
	Pilot * assignedPilot, Pilot * assignedCopilot, Stewardess * assignedStewardess1, 
	Stewardess * assignedStewardess2, Stewardess * assignedStewardess) {
	this->category = category;
	this->brand = brand;
	this->chargeCapacity = chargeCapacity;
	this->military = military;
	this->distanceRange = distanceRange;
	this->seating = seating;
	this->assignedPilot = assignedPilot;
	this->assignedCopilot = assignedCopilot;
	this->assignedStewardess1 = assignedStewardess1;
	this->assignedStewardess2 = assignedStewardess2;
	this->assignedStewardess3 = assignedStewardess3;
}
Plane::~Plane() {
	delete seating;
	delete assignedPilot;
	delete assignedCopilot;
	delete assignedStewardess1;
	delete assignedStewardess2;
	delete assignedStewardess3;
}
string Plane::getCategory() {
	return category;
}
string Plane::getBrand() {
	return brand;
}
float Plane::getChargeCapacity() {
	return chargeCapacity;
}
bool Plane::getMilitary() {
	return military;
}
float Plane::getDistanceRange() {
	return distanceRange;
}
SeatingList* Plane::getSeating(){
	return seating;
}
Pilot * Plane::getPilot() {
	return assignedPilot;
}
Pilot * Plane::getCopilot(){
	return assignedCopilot;
}
Stewardess * Plane::getAssignedStewardess1(){
	return assignedStewardess1;
}
Stewardess * Plane::getAssignedStewardess2(){
	return assignedStewardess2;
}
Stewardess * Plane::getAssignedStewardess3(){
	return assignedStewardess3;
}
void Plane::setCategory(string category) {
	this->category = category;
}
void Plane::setBrand(string brand) {
	this->brand = brand;
}
void Plane::setChargeCapacity(float chargeCapacity) {
	this->chargeCapacity = chargeCapacity;
}
void Plane::setMilitary(bool military) {
	this->military = military;
}
void Plane::setDistanceRange(float distanceRange) {
	this->distanceRange = distanceRange;
}
void Plane::setSeatingList(SeatingList * seating) {
	this->seating = seating;
}
void Plane::setPilot(Pilot* assignedPilot){
	this->assignedPilot = assignedPilot;
}
void Plane::setCopilot(Pilot* assignedCopilot){
	this->assignedCopilot = assignedCopilot;
}
void Plane::setAssignedStewardess1(Stewardess* assignedStewardess1){
	this->assignedStewardess1 = assignedStewardess1;
}
void Plane::setAssignedStewardess2(Stewardess* assignedStewardess2){
	this->assignedStewardess2 = assignedStewardess2;
}
void Plane::setAssignedStewardess3(Stewardess* assignedStewardess3){
	this->assignedStewardess3 = assignedStewardess3;
}
string Plane::toString(){
	stringstream ss;
	ss << "-- Aircraft/Plane Information --\n"
		<< "Category: " << category << "." << endl
		<< "Brand: " << brand << "." << endl
		<< "Load Capacity: " << chargeCapacity << "m³." << endl;
	if (military) ss << "Military: Y." << endl;
	ss << "Distance Range: " << distanceRange << "km." << endl
		<< "Number of seats: " << seating->nodeQuantity() << "." << endl
		<< "--------------------------\n";
	return ss.str();
}
