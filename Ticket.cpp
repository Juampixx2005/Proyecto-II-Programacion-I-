#include "Ticket.h"

Ticket::Ticket(){
    linkedSeatNumber = 0;
    assignatedSeat = nullptr;
}

Ticket::Ticket(int linkedSeatNumber, Seat * assignatedSeat){
    this->linkedSeatNumber = linkedSeatNumber;
    this->assignatedSeat = assignatedSeat;
}

Ticket::~Ticket() {
    delete assignatedSeat;
}

Seat* Ticket::getAssignatedSeat() {
    return assignatedSeat;
}

int Ticket::getSeatNumber() {
    return linkedSeatNumber;
}
void Ticket::setAssignatedSeat(Seat * assignatedFlight) {
    this->assignatedSeat = assignatedSeat;
}
void Ticket::setSeatNumber(int linkedSeatNumber){
    this->linkedSeatNumber = linkedSeatNumber;
}

string Ticket::toString(){
    stringstream ss;
    ss << "----Ticket Information----" << endl;
    ss << "Assignated Seat: " << endl;
    //ss << assignatedFlight->getAsignatedRoute()->getOrigin() << "->" << assignatedFlight->getAsignatedRoute()->getArrival() << endl;
    //ss << "Scales Quantity: " << assignatedFlight->getAsignatedRoute()->getScalesQuantity() << endl;
    //ss << "Price: " << assignatedFlight->getAsignatedRoute()->getTicketValue() << "USD." << endl;
    ss << "Seat Number: " << linkedSeatNumber << endl;
    
    return ss.str(); 
}
