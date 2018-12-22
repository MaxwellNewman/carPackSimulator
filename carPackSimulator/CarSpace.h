

#ifndef CAR_SPACE_H
#define CAR_SPACE_H

class CarSpace{
public:
	CarSpace();
	void setCar(Car& car);
	Car getCar();
	bool isOccupied();
	void removeCar();

private:
	bool isOccupied;
	Car carInSpot;
};

#endif