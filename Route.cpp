#pragma once
#include "Route.h"

Route::Route() {
	name = " ";
	origin = " ";
	destiny = " ";
	duration = nullptr;
	scalesQuantity = 0;
	ticketValue = 0;
}
Route::Route(string name, string origin, string destiny, Hour * duration,
	int scalesQuantity, float ticketValue) {
	this->name = name;
	this->origin = origin;
	this->destiny = destiny;
	this->duration = duration;
	this->scalesQuantity = scalesQuantity;
	this->ticketValue = ticketValue;
}
Route::~Route() { //Mod.
	// delete duration;
	if (duration) {
		delete duration;
		duration = nullptr;
	}
}
string Route::getName() {
	return name;
}
string Route::getOrigin() {
	return origin;
}
string Route::getArrival() {
	return destiny;
}
Hour * Route::getDuration() {
	return duration;
}
int Route::getScalesQuantity() {
	return scalesQuantity;
}
float Route::getTicketValue() {
	return ticketValue;
}
void Route::setName(string name){	
	this->name = name;
}
void Route::setOrigin(string origin) {
	this->origin = origin;
}
void Route::setDestiny(string destiny) {
	this->destiny = destiny;
}
void Route::setDuration(Hour * duration) {
	this->duration = duration;
}
void Route::setScalesQuantity(int scalesQuantity) {
	this->scalesQuantity = scalesQuantity;
}
void Route::setTicketValue(float tickedValue) {
	this->ticketValue = ticketValue;
}
string Route::toString() {
	stringstream ss;
	ss << "-- Route --\n"
		<< "Name: " << name << "." << endl
		<< "Origin place: " << origin << "." << endl
		<< "Destiny place: " << destiny << "." << endl
		<< "Flight duration: " << duration->toString() << "." << endl
		<< "Quantity Scales: " << scalesQuantity << "." << endl
		<< "Ticket Value: " << ticketValue << "USD." << endl
        << "-----------\n";
	return ss.str();
}
