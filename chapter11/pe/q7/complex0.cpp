#include "complex0.h"

Complex::Complex(double r, double i)
{
	real = r;
	imag = i;
}

Complex Complex::operator+(const Complex & b) const
{
	return Complex(real + b.real, imag + b.imag);
}

Complex Complex::operator-(const Complex & b) const
{
	return Complex(real - b.real, imag - b.imag);
}

Complex Complex::operator*(const Complex & b) const
{
	return Complex(real * b.real - imag * b.imag,
								real * b.imag + imag * b.real);
}

Complex Complex::operator~() const
{
	return Complex(real, - imag);
}

Complex Complex::operator*(double n) const
{
	return Complex(n * real, n * imag);
}

Complex operator*(double n, const Complex & a)
{
	return a * n;
}

std::ostream & operator<<(std::ostream & os, const Complex & a)
{
	os << "(" << a.real << "," << a.imag << "i)";
	return os;
}

std::istream & operator>>(std::istream & is, Complex & a)
{
	std::cout << "real: ";
	if (is >> a.real)
	{
		std::cout << "imag: ";
		is >> a.imag;
	}
	return is;
}
