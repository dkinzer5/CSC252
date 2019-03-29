#pragma once
#include <string>
#include <iostream>
#include <ostream>
#include <istream>
namespace CSC252HW3
{
	using std::string;
    using std::ostream;
    using std::istream;
    
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
        friend ostream& operator <<(ostream& out, const Complex& complexNum);
        
		// read in
        friend istream& operator >>(istream& in, Complex& complexNum);

		 
		 // DTOR
		~Complex();

	private:
		double m_real;
		double m_imag;
		Complex();
	};

}
