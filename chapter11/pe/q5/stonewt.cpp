// 11.17 stonewt.cpp -- Stonewt methods
#include <iostream>
using std::cout;
#include "stonewt.h"

// construct Stonewt object from double value
Stonewt::Stonewt(double lbs)
{
	stone = int (lbs) / Lbs_per_stn;
	pds_left = int (lbs) % Lbs_per_stn + lbs - int (lbs);
	pounds = lbs;
	mode = DPOUNDS;
}

// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
	mode = STONE;
}

Stonewt::Stonewt() 			// default constructor, wt = 0
{
	stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt() 		// destructor
{
}

void Stonewt::to_int_pounds()
{
	mode = IPOUNDS;
}

void Stonewt::to_double_pounds()
{
	mode = DPOUNDS;
}

void Stonewt::to_stone()
{
	mode = STONE;
}

Stonewt Stonewt::operator+(const Stonewt & s2) const
{
	return Stonewt(pounds + s2.pounds);
}

Stonewt Stonewt::operator-(const Stonewt & s2) const
{
	return Stonewt(pounds - s2.pounds);
}

Stonewt Stonewt::operator*(double n) const
{
	return Stonewt(pounds * n);
}

Stonewt operator*(double n, const Stonewt & s2)
{
	return s2 * n;
}

std::ostream & operator<<(std::ostream & os, const Stonewt & s)
{
	if (s.mode == Stonewt::STONE)
		os << s.stone << " stone, " << s.pds_left << " pounds\n";
	else if (s.mode == Stonewt::DPOUNDS)
		os << s.pounds << " pounds\n";
	else if (s.mode == Stonewt::IPOUNDS)
		os << int(s.pounds) << " pounds\n";
	else
		os << "Invalid form.\n";
	return os;
}

// show weight in stones
// void Stonewt::show_stn() const
// {
// 	cout << stone << " stone, " << pds_left << " pounds\n";
// }

// show weight in pounds
// void Stonewt::show_lbs() const
// {
// 	cout << pounds << " pounds\n";
// }
