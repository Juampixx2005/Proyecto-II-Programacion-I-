#include "Passenger.h"

Passenger::Passenger() : Person() {
    assignedTicket = nullptr;
}
Passenger::Passenger(string name, int id, Ticket * assignedTicket)
: Person(name, id) {
    this->assignedTicket = assignedTicket;
}
Passenger::~Passenger() {
    delete assignedTicket;
}
Ticket * Passenger::getAssignedTicket() {
    return assignedTicket;
}
void Passenger::setAssignedTicket(Ticket * assignedTicket) {
    this->assignedTicket = assignedTicket;
}
string Passenger::toString() {
    stringstream ss;
    ss << "—— Passenger Data ——\n"
        << "Name: " << name << "." << endl
        << "ID: " << id << "." << endl
        << "Assigned ticket information: " << assignedTicket->toString() << "." << endl
        << "——---------------——\n";
    return ss.str();
}