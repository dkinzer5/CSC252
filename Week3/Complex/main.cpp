#include <iostream>
#include "Complex.h"
using std::cout;
using std::cin;
using std::endl;

using CSC252HW3::Complex;

int main()
{
	double dReal1 = 5.0;
	double dImage1 = 5.0;

	double dReal2 = 5.0;
	double dImage2 = 5.1;

	double dReal3 = 7.0;
	double dImage3 = 7.0;

	Complex comp1(dReal1, dImage1);
	Complex comp2(dReal2, dImage2);
	Complex comp3(dReal3, dImage3);

	// TESTS add and assignment
	comp3 = comp2 + comp1;
	cout << comp3.getReal() << endl << comp3.getImag() << endl;

	// TESTS minus and assigment
	comp3 = comp2 - comp1;
	cout << comp3.getReal() << endl << comp3.getImag() << endl;

	// TESTS multiply operator
	comp3 = comp1 * comp2;
	cout << comp3.getReal() << endl << comp3.getImag() << endl;

	// Tests not equal comparison
	if (comp1 != comp2)
	{
		cout << "they are not equal!\n";
	}
	else
	{
		cout << "They must be equal!\n";
	}

	cout << comp1 << endl;

	return 0;

}