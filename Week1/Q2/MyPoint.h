#pragma once

class MyPoint
{
public:

	// Constructors
	MyPoint();
	MyPoint(double, double);

	// Accessor Methods
	double getX();
	double getY();

	// Get distance between 2 points
	double distance(MyPoint);


private:
	double x;
	double y;
};
