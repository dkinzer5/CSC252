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

	double dReal2 = 13.73;
	double dImage2 = 4.65;

	double dReal3 = 7.0;
	double dImage3 = 7.0;

	Complex comp1(dReal1, dImage1);
	Complex comp2(dReal1, dImage1);
	Complex comp3(dReal3, dImage3);
	Complex comp4(dReal2, dReal3);

	// TESTS add and assignment - should be 10 + 10i
	comp3 = comp2 + comp1;
	cout << "Complex number 3 is: " << comp3 << endl;

	// TESTS minus and assigment
	comp4 = comp3 - comp1;
	cout << "Complex number 4 is: " << comp4 << endl;

	// TESTS multiply operator
	comp3 = comp1 * comp2;
	cout << comp3 << endl;


	// Tests not equal comparison
	if (comp1 != comp2)
	{
		cout << "they are not equal!\n";
	}
	else
	{
		cout << "They must be equal!\n";
	}

	cout << "Enter the real portion and imaginary portion (separated by a space) : ";
	cin >> comp4;

	cout << "Your complex number is: " << comp4 << endl;
	return 0;

}