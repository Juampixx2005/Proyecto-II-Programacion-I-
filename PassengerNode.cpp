#include "PassengerNode.h"

PassengerNode::PassengerNode(){
	charge = nullptr;
	next = nullptr;}

PassengerNode::PassengerNode(Passenger* charge, PassengerNode* next){
	this->charge = charge;
	this->next = next;}

PassengerNode::~PassengerNode(){
	delete charge;
	delete next;}

Passenger* PassengerNode::getCharge(){
	return charge;}

PassengerNode* PassengerNode::getNext(){
	return next;}

void PassengerNode::setCharge(Passenger * charge){
	this->charge = charge;}

void PassengerNode::setNext(PassengerNode*){
	this->next = next;}
