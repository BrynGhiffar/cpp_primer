// Task A, B, C & D
#include "port.h"
#include <cstring>

// --- Task A ---
Port::Port(const char * br, const char * st, int b)
{
	brand = new char[strlen(br) + 1]; strcpy(brand, br);
	strncpy(style, st, 19); style[19] = '\0';
	bottles = b;
}

Port::Port(const Port & p)
{
	brand = new char[strlen(p.style) + 1]; strcpy(brand, p.brand);
	strncpy(style, p.style, 19); style[19] = '\0';
	bottles = p.bottles;
}

Port & Port::operator=(const Port & p)
{
	if (this == &p)
		return *this;
	delete [] brand;
	brand = new char[strlen(p.brand) + 1]; strcpy(brand, p.brand);
	strncpy(style, p.style, 19); style[19] = '\0';
	bottles = p.bottles;
	return *this;
}

Port & Port::operator+=(int b)
{
	bottles += b;
	return *this;
}

Port & Port::operator-=(int b)
{
	if (bottles >= b)
		bottles -= b;
	return *this;
}

void Port::Show() const
{
	std::cout << "Brand: " << brand << '\n';
	std::cout << "Kind: " << style << '\n';
	std::cout << "Bottles: " << bottles << '\n';
}

std::ostream & operator<<(std::ostream & os, const Port & p)
{
	os << p.brand << ", " << p.style << ", " << p.bottles;
	return os;
}

// --- Task B ---
// certain methods are redefined in their sub-class
// because they are declared as virtual

// --- Task C ---
// operator<<()` cannot be declared virtual because it is a friend function,
// it cannot be virtual. `operator=()` is not virtual because it is not
// going to be redefined in the subclasses of Port


// --- Task D ---
VintagePort::VintagePort()
	: Port::Port("none", "vintage", 0)
{
	nickname = new char[5];
	strcpy(nickname, "none");
	year = 0;
}

VintagePort::VintagePort(const char * br, int b, const char * nn, int y)
	: Port::Port(br, "vintage", b)
{
	nickname = new char[strlen(nn) + 1];
	strcpy(nickname, nn);
	year = y;
}

VintagePort & VintagePort::operator=(const VintagePort & vp)
{
	if (this == &vp)
		return *this;
	Port::operator=(vp);
	delete [] nickname;
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy(nickname, vp.nickname);
	year = vp.year;
	return *this;
}

void VintagePort::Show() const
{
	Port::Show();
	std::cout << "Nickname: " << nickname << '\n';
	std::cout << "Year: " << year << '\n';
}

std::ostream & operator<<(std::ostream & os, const VintagePort & vp)
{
	os << (const Port &) vp;
	os << ", " << vp.nickname << ", " << vp.year;
	return os;
}
