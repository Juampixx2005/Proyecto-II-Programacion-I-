#pragma once
#include "Person.h"
#include "Ticket.h"
class Passenger : public Person {
private:
    Ticket * assignedTicket; 
public:
    Passenger();
    Passenger(string, int, Ticket *);
    ~Passenger();
    Ticket * getAssignedTicket();
    void setAssignedTicket(Ticket *);
    string toString() override;
};
