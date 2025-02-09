#pragma once
#include "Hour.h"

Hour::Hour() {
	hours = 0;
	minutes = 0;
}
Hour::Hour(int hours, int minutes) {
	this->hours = hours;
	this->minutes = minutes;
}
Hour::~Hour(){}
int Hour::getMinutes() {
	return minutes;
}
int Hour::getHours() {
	return hours;
}
void Hour::setMinutes(int minutes) {
	this->minutes = minutes;
}
void Hour::setHours(int hours) {
	this->hours = hours;
}
string Hour::toString() {
	stringstream ss;
	ss << hours << ":" << minutes << "." << endl;
	return ss.str();
}