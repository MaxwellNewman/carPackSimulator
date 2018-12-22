#include "Car.h"

Car::Car(Highway& highway, int speed){
	this->highway = highway;
	this->position = 0;
	this->speed = speed;
}