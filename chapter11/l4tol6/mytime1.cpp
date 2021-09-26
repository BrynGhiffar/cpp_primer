// 11.5 mytime1.cpp -- implementing Time methods
#include <iostream>
#include "mytime1.h"

Time::Time()
{
	m_hours = m_minutes = 0;
}

Time::Time(int h, int m)
{
	m_hours = h;
	m_minutes = m;
}

void Time::AddMin(int m)
{
	m_minutes += m;
	m_hours += m_minutes / 60;
	m_minutes %= 60;
}

void Time::AddHr(int h)
{
	m_hours += h;
}

void Time::Reset(int h, int m)
{
	m_hours = h;
	m_minutes = m;
}

Time Time::operator+(const Time & t) const
{
	Time sum;
	sum.m_minutes = m_minutes + t.m_minutes;
	sum.m_hours = m_hours + t.m_hours + sum.m_minutes / 60;
	sum.m_minutes %= 60;
	return sum;
}

void Time::Show() const
{
	std::cout << m_hours << " hours, " << m_minutes << " minutes";
}
