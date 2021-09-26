// 11.5 mytime1.cpp -- implementing Time methods
#include "mytime3.h"

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

// Time Time::operator+(const Time & t) const
Time operator+(const Time & t1, const Time & t2)
{
	Time sum;
	sum.m_minutes = t1.m_minutes + t2.m_minutes;
	sum.m_hours = t1.m_hours + t2.m_hours + sum.m_minutes / 60;
	sum.m_minutes %= 60;
	return sum;
}

// Time Time::operator-(const Time & t) const
Time operator-(const Time & t1, const Time & t2)
{
	Time diff;
	int tot1, tot2;
	tot1 = t1.m_hours * 60 + t1.m_minutes;
	tot2 = t2.m_hours * 60 + t2.m_minutes;
	diff.m_hours = (tot1 - tot2) / 60;
	diff.m_minutes = (tot1 - tot2) % 60;
	return diff;
}

Time operator*(double n, const Time & t)
{
	return t * n;
}

Time operator*(const Time & t, double n)
{
	Time result;
	long totalminutes = t.m_hours * 60 * n + t.m_minutes * n;
	result.m_hours = totalminutes / 60;
	result.m_minutes = totalminutes % 60;
	return result;
}

std::ostream & operator<<(std::ostream & os, const Time & t)
{
	os << t.m_hours << " hours, " << t.m_minutes << " minutes";
	return os;
}
