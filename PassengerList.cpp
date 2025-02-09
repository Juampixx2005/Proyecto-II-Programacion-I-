#include "PassengerList.h"

PassengerList::PassengerList(){
	first = nullptr;
	actual = nullptr;
}

PassengerList::~PassengerList(){
	while (first != nullptr) { //elimina siempre el primero
		actual = first;
		first = first->getNext();
		delete actual;
	}
}

PassengerNode* PassengerList::getFirst(){
	return first;
}

PassengerNode* PassengerList::getActual(){
	return actual;
}

void PassengerList::addToBeginning(Passenger * newPassenger){
	actual = new PassengerNode(newPassenger, nullptr);
	if (first == nullptr) {
		first = actual;
	}
	else {
		actual->setNext(first);
		first = actual;
	}
}

void PassengerList::addToTheEnd(Passenger * newPassenger){
	if (first == nullptr) {
		first = new PassengerNode(newPassenger, nullptr);
	}
	else {
		while (actual->getNext() != nullptr)
			actual = actual->getNext();
		actual->setNext(new PassengerNode(newPassenger, nullptr));
	}
}

void PassengerList::deleteBeginning(){
	if (first != nullptr) {
		actual = first;
		first = first->getNext();
		delete actual;
	}
}

void PassengerList::deleteEnd(){
	if (first!=nullptr) {
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

void PassengerList::insertPosition(Passenger * newPassenger, int position){
	bool posible = position > 0 && position <= nodeQuantity() + 1;
	if (posible)
		if (position == 1)
			first = new PassengerNode(newPassenger, first);
		else {
			actual = first;
			for (int i = 2; i < position; i++)
				actual = actual->getNext();
			actual->setNext(new PassengerNode(newPassenger, actual->getNext()));
		}
}

void PassengerList::deletePosition(int position){
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
			PassengerNode * forEliminate = actual->getNext();
			actual->setNext(actual->getNext()->getNext());
			delete forEliminate;
		}
}

int PassengerList::nodeQuantity(){
	int quantity = 0;
	actual = first;
	while (actual != nullptr) {
		quantity++;
		actual = actual->getNext();
	}
	return quantity;
}

string PassengerList::toString(){
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
