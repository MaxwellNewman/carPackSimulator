#include <queue>

class Car{
public:
	Car(Highway& highway, int speed);
	int getSpeed();
	int getPosition();
	void move();

private:
	int speed;
	int position;
	Highway highway;
};