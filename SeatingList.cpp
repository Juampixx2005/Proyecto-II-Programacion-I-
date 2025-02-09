#include "SeatingList.h"

SeatingList::SeatingList(){
    first = nullptr;
    actual = nullptr;}

SeatingList::~SeatingList(){
    while (first != nullptr) { //elimina siempre el primero
        actual = first;
        first = first->getNext();
        delete actual;
    }
}

SeatNode* SeatingList::getFirst() {
    return first;}

SeatNode* SeatingList::getActual(){
    return actual;}

void SeatingList::addToBeginning(Seat * newSeat){
    actual = new SeatNode(newSeat, nullptr);
    if (first == nullptr) {
        first = actual;
    }
    else {
        actual->setNext(first);
        first = actual;
    }
}

void SeatingList::addToTheEnd(Seat* newSeat){
    if (first == nullptr) {
        first = new SeatNode(newSeat, nullptr);
    }
    else {
        while (actual->getNext() != nullptr)
            actual = actual->getNext();
        actual->setNext(new SeatNode(newSeat, nullptr));
    }
}

void SeatingList::deleteBeginning(){
    if (first != nullptr) {
        actual = first;
        first = first->getNext();
        delete actual;}
}

void SeatingList::deleteEnd(){
    if (first != nullptr) {
        actual = first;
        if (actual->getNext() == nullptr) {
            delete first;
            first = nullptr;
        }
        else {
            while (actual->getNext()->getNext() != nullptr)
                actual = actual->getNext();
            delete actual->getNext();
            actual->setNext(nullptr);
        }
    }
}

void SeatingList::insertPosition(Seat* newSeat, int position){
    bool posible = position > 0 && position <= nodeQuantity() + 1;
    if (posible)
        if (position == 1)
            first = new SeatNode(newSeat, first);
        else {
            actual = first;
            for (int i = 2; i < position; i++)
                actual = actual->getNext();
            actual->setNext(new SeatNode(newSeat, actual->getNext()));
        }
}

void SeatingList::deletePosition(int position){
    bool posible = position >= 1 && position <= nodeQuantity();
    actual = first;
    if (posible)
        if (position == 1) {
            first = first->getNext();
            delete actual;
        }
        else {
            for (int i = 2; i < position; i++)
                actual = actual->getNext();
            SeatNode* forEliminate = actual->getNext();
            actual->setNext(actual->getNext()->getNext());
            delete forEliminate;
        }
}

int SeatingList::nodeQuantity(){
    int quantity = 0;
    actual = first;
    while (actual != nullptr) {
        quantity++;
        actual = actual->getNext();
    }
    return quantity;
}

string SeatingList::toString(){
    stringstream ss;
    actual = first;
    while (actual != nullptr) {
        for (int i = 0; i < nodeQuantity(); i++) {
            ss << actual->getCharge()->toString() << endl;
            actual = actual->getNext();
        }
    }
    return ss.str();
}
