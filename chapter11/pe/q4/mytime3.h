// 11.4 mytime1.h -- Time class before operator overloading
#ifndef MYTIME2_H_
#define MYTIME2_H_
#include <iostream>

class Time
{
	private:
		int m_hours;
		int m_minutes;
	public:
		Time();
		Time(int h, int m = 0);
		void AddMin(int m);
		void AddHr(int h);
		void Reset(int h = 0, int m = 0);
		// Time operator+(const Time & t) const;
		// Time operator-(const Time & t) const;
		// Time operator*(double n) const;
		friend Time operator+(const Time & t1, const Time & t2);
		friend Time operator-(const Time & t1, const Time & t2);
		friend Time operator*(const Time & t, double m);
		friend Time operator*(double m, const Time & t);
		friend std::ostream & operator<<(std::ostream & os, const Time & t);
};

#endif
