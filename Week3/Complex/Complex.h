#pragma once
#include <string>
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
        Complex operator +(const Complex& complexNum); // const?
        
        // Subtract
        Complex operator -(const Complex& complexNum); // const?
        
        // Multiply
        Complex operator *(const Complex& complexNum); // const?
        
        // Divide
        Complex operator /(const Complex& complexNum); // const?
        
        
        // set equal to
        Complex& operator =(const Complex& complexNum); //const?
        /*
        // compare
        Complex operator !=(const Complex& complexNum) const;
        
        // print out
        Complex operator <<(const Complex& complexNum) const;
        
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
