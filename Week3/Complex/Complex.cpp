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
    Complex Complex::operator +(const Complex& complexNum)
    {
        Complex  sum;
        sum.m_imag = this->m_imag + complexNum.m_imag;
        sum.m_real = this->m_real + complexNum.m_real;
        
        return sum;
    }
    
    // Subtract
    Complex Complex::operator -(const Complex& complexNum)
    {
        return complexNum;
    }
    
    // Multiply
    Complex Complex::operator *(const Complex& complexNum)
    {
     return complexNum;
    }
    
    // Divide
    Complex Complex::operator /(const Complex& complexNum)
    {
        return complexNum;
    }
    
    // set equal to
    Complex& Complex::operator =(const Complex& complexNum)
    {
        this->m_real = complexNum.m_real;
        this->m_imag = complexNum.m_imag;
        return *this;
    }
    /*
    // compare
    Complex operator !=(const Complex& complexNum)
    {
        
    }
    
    // print out
    Complex operator <<(const Complex& complexNum)
    {
        
    }
    
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

