#include <iostream>
#include <iomanip>
#include "MyPoint.h"

int main()
{
	MyPoint first;
	MyPoint last(10, 30.5);

	std::cout << std::fixed << std::setprecision(4) << first.distance(last);
	return 0;
}