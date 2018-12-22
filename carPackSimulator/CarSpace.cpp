#include "CarSpace.h"

CarSpace::CarSpace(){
	this->isOccupied = false;
	this->car = NULL;
}

void CarSpace::setCar(Car& car){
	this->car = car;
	this->isOccupied = true;
}

Car CarSpace::getCar(){
	if(!this->isOccupied){
		return NULL;
	}
	
	return this->car;
}

bool CarSpace::isOccupied(){
	return this->isOccupied;
}

void CarSpace::removeCar(){
	this->car = NULL;
	this->isOccupied = false;
}