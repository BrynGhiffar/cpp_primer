// 12.2 strngbad.cpp -- StringBad class methods
#include <cstring> 						// string.h for some
#include "strngbad.h"
using std::cout;

// initializing static class member
int StringBad::num_strings = 0;

// class methods

// construct StringBad from C string
StringBad::StringBad(const char * s)
{
	len = std::strlen(s); 				// set size
	str = new char[len + 1]; 			// allot storage
	std::strcpy(str, s); 					// initialize pointer
	num_strings++; 								// set object count
	cout << num_strings << ": \"" << str
			<< "\" object created\n"; // For Your Information
}

StringBad::StringBad()
{
	len = 4;
	str = new char[4];
	std::strcpy(str, "C++"); 				// defailt string
	num_strings++;
	cout << num_strings << ": \"" << str
		<< "\" default object created\n";  // PYI
}

StringBad::~StringBad() 					// necessary destructor
{
	cout << "\"" << str << "\" object deleted, "; // FYI
	--num_strings; 										// required
	cout << num_strings << " left\n"; // FYI
	delete [] str;
}

std::ostream & operator<<(std::ostream & os, const StringBad & st)
{
	os << st.str;
	return os;
}
