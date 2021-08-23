#include <iostream>
#include <cstring>
#include "person.h"

Person::Person(const std::string & ln, const char * fn)
{
	lname = ln;
	fname[LIMIT - 1] = '\0';
	strncpy(fname, fn, LIMIT - 1);
}

void Person::Show() const
{
	using std::cout;
	using std::endl;
	cout << "Name: " << fname << " " << lname << endl;
}

void Person::FormalShow() const
{
	using std::cout;
	using std::endl;
	cout << "Name: " << lname << ", " << fname << endl;
}
