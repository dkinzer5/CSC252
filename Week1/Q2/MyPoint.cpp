#include "MyPoint.h"
#include <cmath>

//Default constructor - initialize to 0
MyPoint::MyPoint()
{
	x = 0.0;
	y = 0.0;
}

MyPoint::MyPoint(double myX, double myY)
{
	x = myX;
	y = myY;
}

double MyPoint::getX()
{
	return x;
}

double MyPoint::getY()
{
	return y;
}

double MyPoint::distance(MyPoint point)
{
	//Find difference in x and y and square it
	double xDiffSquared = pow( (point.x - x) , 2.0);
	double yDiffSquared = pow( (point.y - y) , 2.0);

	//return distance between the points
	return sqrt(xDiffSquared + yDiffSquared);
	
}