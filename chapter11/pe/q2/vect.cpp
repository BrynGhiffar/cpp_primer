// 11.14 vect.cpp -- methods for the Vector class
#include <cmath>
#include "vect.h" // include <iostream>
using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR
{
	// compute degrees in one radian
	const double Rad_to_deg = 45.0 / atan(1.0);
	// should be about 57.2957795130823

	// private methods
	// calculate magnitude from x and y
	// void Vector::set_mag()
	// {
	// 	mag = sqrt(x * x + y * y);
	// }

	// void Vector::set_ang()
	// {
	// 	if (x == 0.0 && y == 0.0)
	// 		ang = 0.0;
	// 	else
	// 		ang = atan2(y, x);
	// }

	// void Vector::set_x()
	// {
	// 	x = mag * cos(ang);
	// }

	// void Vector::set_y()
	// {
	// 	y = mag * sin(ang);
	// }

	// public methods
	Vector::Vector() 			// default constructor	
	{
		x = y = 0.0; //  mag = ang = 0.0;
		mode = RECT;
	}

	// construct vector from rectangular coordinates if form is r 
	// (the default) or else from polar coordinates if form is p 
	Vector::Vector(double n1, double n2, Mode form)
	{
		mode = form;
		if (form == RECT)
		{
			x = n1; y = n2; 
			// set_mag();
			// set_ang();
		}
		else if (form == POL)
		{
			x = n1 * cos(n2 / Rad_to_deg);
			y = n1 * sin(n2 / Rad_to_deg);
			// mag = n1; 
			// ang = n2 / Rad_to_deg; // convert degrees to radians
			// set_x();
			// set_y();
		} else {
			cout << "Incorrect 3rd argument to Vector() -- ";
			cout << "vector set to 0\n";
			x = y = 0.0; // mag = ang = 0.0;
			mode = RECT;
		}
	}

	// reset vector from rectangular coordinates if form is
	// RECT (the default) or else from polar coordinates if
	// form is POL
	void Vector::reset(double n1, double n2, Mode form)
	{
		mode = form;
		if (form == RECT)
		{
			x = n1;
			y = n2;
			// set_mag();
			// set_ang();
		} else if (form == POL)
		{
			// mag = n1;
			// ang = n2 / Rad_to_deg;
			x = n1 * cos(n2 / Rad_to_deg);
			y = n1 * sin(n2 / Rad_to_deg);
			// set_x();
			// set_y();
		}
		else
		{
			cout << "Incorrect 3rd argument to Vector() -- ";
			cout << "vector set to 0\n";
			x = y = 0.0; //  mag = ang = 0.0;
			mode = RECT;
		}
	}
	Vector::~Vector() // destructor
	{}

	double Vector::magval() const
	{
		return sqrt(x * x + y * y);
	}

	double Vector::angval() const
	{
		if (x == 0.0 && y == 0.0)
			return 0.0;
		else
			return atan2(y, x);
	}

	void Vector::polar_mode() 		// set to polar mode
	{
		mode = POL;
	}
	void Vector::rect_mode() 			// set to rectangular mode
	{
		mode = RECT;
	}

	// operator overloading
	// add two Vectors
	Vector Vector::operator+(const Vector & b) const
	{
		return Vector(x + b.x, y + b.y);
	}

	// subtract vector b from vector a
	Vector Vector::operator-(const Vector & b) const
	{
		return Vector(x - b.x, y - b.y);
	}

	// reverse sign of vector
	Vector Vector::operator-() const
	{
		return Vector(-x , -y);
	}

	// multiply vector by n
	Vector Vector::operator*(double n) const
	{
		return Vector(n * x, n * y);
	}

	// friend methods
	// multiply n by Vector a
	Vector operator*(double n, const Vector & a)
	{
		return a * n;
	}

	// display rectangular coordinates if mode is RECT,
	// else display polar coordinates if mode is POL
	std::ostream & operator<<(std::ostream & os, const Vector & v)
	{
		if (v.mode == Vector::RECT)
			os << "(x, y) = (" << v.x << ", " << v.y << ")";
		else if (v.mode == Vector::POL)
		{
			os << "(m, a) = (" << v.magval() << ", "
				<< v.angval() * Rad_to_deg << ")";
		}
		else
			os << "Vector object is invalid";
		return os;
	}
}  // end of namespace vector
