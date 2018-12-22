#include <deque>
#include "deque.h"

#ifndef HIGHWAY_H
#define HIGHWAY_H

class Highway{
public:
	Highway();
	void driveCars();

private:
	std::deque<Car> cars;

}

#endif