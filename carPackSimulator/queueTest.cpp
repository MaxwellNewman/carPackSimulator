#include <iostream>
#include <deque>

int main(){
	std::deque<int> testDeque;

	testDeque.push_front(100);
	testDeque.push_front(200);
	testDeque.push_front(300);

	std::cout << *testDeque.begin() << std::endl;
	std::cout << *(testDeque.begin() + 1) << std::endl;

	return 0;
}