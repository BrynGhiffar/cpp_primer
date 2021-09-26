#include <iostream>
#include <cstring>
#include "golf.h"

Golf::Golf(const char * name, int hc)
{
	fullname[Len - 1] = '\0';
	strncpy(fullname, name, Len - 1);	
	handicap = hc;
}

int Golf::setgolf()
{
	char name[Len];
	int hc;
	std::cout << "Enter golfer name: ";
	name[0] = '\0';
	std::cin.get(name, Len);
	std::cin.clear();
	if (name[0] == '\0')
		return 0;
	while (std::cin.get() != '\n');
	std::cout << "Enter golfer handicap: ";
	(std::cin >> hc).get();
	Golf temp(name, hc);
	*this = temp;
	return 1;
}

void Golf::update_handicap(int hc)
{
	handicap = hc;
}

void Golf::showgolf() const
{
	std::cout << "Name: " << fullname << std::endl;
	std::cout << "Handicap: " << handicap << std::endl;
}
