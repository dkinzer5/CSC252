#pragma once
#include <string>
#include <iostream>
#include <ostream>
namespace CSC252HW3
{
	using std::string;
	class Complex
	{
	public:

		// CTOR
		Complex(double, double);

		// MUTATORS
		void setReal(double);
		void setImag(double);

		// ACCESSORS
		const double getReal();
		const double getImag();

		// Add
		Complex operator +(const Complex&); // const?

		// Subtract
		Complex operator -(const Complex&); // const?

		// Multiply
		Complex operator *(const Complex&); // const?

		// Divide
		Complex operator /(Complex&); // const?


		// set equal to
		Complex& operator =(const Complex&); //const?
		
		// compare
		bool operator !=(const Complex&) const;
		
		// print out
		std::ostream& operator <<(std::ostream& out, const Complex& complexNum) const;
/*
		// read in
		Complex operator >>(const Complex& complexNum) const;

		 */
		 // DTOR
		~Complex();

	private:
		double m_real;
		double m_imag;
		Complex();
	};

}
