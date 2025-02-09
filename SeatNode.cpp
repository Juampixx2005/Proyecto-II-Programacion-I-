#include "SeatNode.h"

SeatNode::SeatNode() {
    charge = nullptr;
    next = nullptr;}

SeatNode::SeatNode(Seat* charge, SeatNode* next){
    this->charge = charge;
    this->next = next;}

SeatNode::~SeatNode(){
    delete charge;
    delete next;}

Seat* SeatNode::getCharge(){
    return charge;}

SeatNode* SeatNode::getNext(){
    return next;}

void SeatNode::setCharge(Seat * charge){
    this->charge = charge;}

void SeatNode::setNext(SeatNode* next){
    this->next = next;}
