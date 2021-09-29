// 13.15 dma.cpp -- dma class methods

#include "dma.h"
#include <cstring>
// abcDMA methods
abcDMA::abcDMA(const char * l, int r)
{
	label = new char[strlen(l) + 1];
	strcpy(label, l);
	rating = r;
}

abcDMA::abcDMA(const abcDMA & rs)
{
	label = new char[strlen(rs.label) + 1];
	strcpy(label, rs.label);
	rating = rs.rating;
}

abcDMA::~abcDMA()
{
	delete [] label;
}

abcDMA & abcDMA::operator=(const abcDMA & rs)
{
	if (this == &rs)
		return *this;
	delete [] label;
	label = new char[strlen(rs.label) + 1];
	strcpy(label, rs.label);
	rating = rs.rating;
	return *this;
}

std::ostream & operator<<(std::ostream & os, const abcDMA & rs)
{
	os << "label: " << rs.label << '\n';
	os << "rating: " << rs.rating << '\n';
	return os;
}

void abcDMA::View() const
{
	std::cout << "label: " << label << '\n';
	std::cout << "rating: " << rating << '\n';
}

// baseDMA methods
baseDMA::baseDMA(const char * l, int r)
	: abcDMA::abcDMA(l, r)
{}

baseDMA::baseDMA(const baseDMA & rs)
	: abcDMA::abcDMA(rs)
{}

baseDMA::~baseDMA()
{}

baseDMA & baseDMA::operator=(const baseDMA & rs)
{
	if (this == &rs)
		return *this;
	abcDMA::operator=(rs);
	return *this;
}

std::ostream & operator<<(std::ostream & os, const baseDMA & rs)
{
	os << (const abcDMA &) rs;
	return os;
}

void baseDMA::View() const
{
	abcDMA::View();
}

// lacksDMA methods
lacksDMA::lacksDMA(const char * c, const char * l, int r)
	: abcDMA::abcDMA(l, r)
{
	std::strncpy(color, c, COL_LEN - 1);
	color[COL_LEN - 1] = '\0';
}

lacksDMA::lacksDMA(const char * c, const abcDMA & rs)
	: abcDMA::abcDMA(rs)
{
	std::strncpy(color, c, COL_LEN - 1);
	color[COL_LEN - 1] = '\0';
}

lacksDMA::lacksDMA(const lacksDMA & rs)
	: abcDMA::abcDMA(rs)
{
	std::strncpy(color, rs.color, COL_LEN - 1);
	color[COL_LEN - 1] = '\0';
}

lacksDMA & lacksDMA::operator=(const lacksDMA & rs)
{
	if (this == &rs)
		return *this;
	abcDMA::operator=(rs);
	std::strncpy(color, rs.color, COL_LEN - 1);
	color[COL_LEN - 1] = '\0';
	return *this;
}

std::ostream & operator<<(std::ostream & os, const lacksDMA & ls) 
{
	os << (const abcDMA &) ls;
	os << "Color: " << ls.color << std::endl;
	return os;
}

void lacksDMA::View() const
{
	abcDMA::View();
	std::cout << "Color: " << color << std::endl;
}

// hasDMA methods
hasDMA::hasDMA(const char * s, const char * l, int r)
	: abcDMA::abcDMA(l, r)
{
	style = new char[std::strlen(s) + 1];
	std::strcpy(style, s);
}

hasDMA::hasDMA(const char * s, const abcDMA & rs)
	: abcDMA::abcDMA(rs)
{
	style = new char[std::strlen(s) + 1];
	std::strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA & hs)
	: abcDMA::abcDMA(hs) 	// invoke base class copy constructor
{	
	style = new char[std::strlen(hs.style) + 1];
	std::strcpy(style, hs.style);
}

hasDMA::~hasDMA()
{
	delete [] style;
}

hasDMA & hasDMA::operator=(const hasDMA & rs)
{
	if (this == &rs)
		return *this;
	// ((baseDMA & ) *this) = rs; // either this 
																// 	or the line below is fine
	abcDMA::operator=(rs); 		// copy base portion
	delete [] style; 						// prepare for new style
	style = new char[strlen(rs.style) + 1];
	std::strcpy(style, rs.style);
	return *this;
}

std::ostream & operator<<(std::ostream & os, const hasDMA & hs)
{
	os << (const abcDMA &) hs;
	os << "Style: " << hs.style << std::endl;
	return os;
}

void hasDMA::View() const
{
	abcDMA::View();
	std::cout << "Style: " << style << std::endl;
}

