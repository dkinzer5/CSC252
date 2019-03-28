#include "Complex.h"


namespace CSC252HW3
{
	Complex::Complex() : m_real(0), m_imag(0) {}

	Complex::Complex(double real, double imaginary) : m_real(real), m_imag(imaginary)
	{

	}


	//MUTATORS
	void Complex::setReal(double myRealNumber)
	{
		this->m_real = myRealNumber;
	}

	void Complex::setImag(double imagNum)
	{
		this->m_imag = imagNum;
	}

	//ACCESSORS
	const double Complex::getReal()
	{
		return m_real;
	}

	const double Complex::getImag()
	{
		return m_imag;
	}

	// Add
	Complex Complex::operator +(const Complex& that)
	{
		Complex  sum;
		sum.m_imag = this->m_imag + that.m_imag;
		sum.m_real = this->m_real + that.m_real;

		return sum;
	}

	// Subtract
	Complex Complex::operator -(const Complex& that)
	{
		Complex  difference;
		difference.m_imag = this->m_imag - that.m_imag;
		difference.m_real = this->m_real - that.m_real;

		return difference;
	}

	// Multiply
	Complex Complex::operator *(const Complex& that)
	{
		Complex product;

		//FOIL (first, outer, inner, last)
		double F = this->m_real * that.m_real;
		double O = this->m_real * that.m_imag;
		double I = this->m_imag * that.m_real;
		double L = this->m_imag * that.m_imag;

		// Combine like terms into 'O' for imaginary portion
		O += I;

		// Take care of changing sign in 'L'
		// if negative, make positive
		if (std::signbit(L))
		{
			L = L * -1;
		}
		// if positive, make negative
		else
		{
			L = L * -1;
		}

		// Combine L and F together
		F += L;

		//Real portion is sum of combining F and L together
		product.m_real = F;

		// Imaginary portion is the sum of combining O and I;
		product.m_imag = O;

		return product;
	}

	// Divide
	Complex Complex::operator /(Complex& that)
	{
		// return object
		Complex quotient; 

		// conjugate object
		Complex conjugate;

		// make conjugate
		conjugate.m_real = that.m_real;
		conjugate.m_imag = that.m_imag * -1;

		// multiply both by the conjugate 
		*this * conjugate; // numerator
		that * conjugate; // denominator

		// conjugate.m_imag should always evaluate to 0
		quotient.m_real = this->m_real / conjugate.m_real;
		quotient.m_imag = this->m_imag / conjugate.m_real;
		return quotient;
	}

	// set equal to
	Complex& Complex::operator =(const Complex& that)
	{
		this->m_real = that.m_real;
		this->m_imag = that.m_imag;
		return *this;
	}
	
	// compare
	bool Complex::operator !=(const Complex& that) const
	{
		// if real && imaginary are equal
		return  !(this->m_real == that.m_real && this->m_imag == that.m_imag);
	}

	// print out
	std::ostream Complex::operator <<(std::ostream out, const Complex& complexNum) const
	{
		// print out real portion
		std::cout << complexNum.m_real << " " << complexNum.m_imag;
	}
/*
	// read in
	Complex operator >>(const Complex& complexNum)
	{

	}
	*/
	//DTOR
	Complex::~Complex()
	{
	}

}

