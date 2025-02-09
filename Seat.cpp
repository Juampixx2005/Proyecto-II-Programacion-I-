#include "Seat.h"

Seat::Seat() {
    seatNumber = 0;
}

Seat::Seat(int seatNumber) {
    this->seatNumber = seatNumber;
}
Seat::~Seat(){}
int Seat::getSeatNumber() {
    return seatNumber;
}
void Seat::setSeatNumber(int seatNumber) {
    this->seatNumber = seatNumber;
}
string Seat::toString() {
    stringstream ss;
    ss << "The seat number is: " << seatNumber << "." << endl;
    return ss.str();
}
