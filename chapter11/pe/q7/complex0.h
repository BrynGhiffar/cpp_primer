#ifndef COMPLEX0_H_
#define COMPLEX0_H_
#include <iostream>
class Complex{
	private:
		double real;
		double imag;
	public:
		Complex(double r = 0.0, double i = 0.0);
		Complex operator+(const Complex & b) const;
		Complex operator-(const Complex & b) const;
		Complex operator*(const Complex & b) const;
		Complex operator~() const;
		Complex operator*(double n) const;
		friend Complex operator*(double n, const Complex & a);
		friend std::ostream & operator<<(std::ostream & os, const Complex & a);
		friend std::istream & operator>>(std::istream & is, Complex & a);

};
#endif
