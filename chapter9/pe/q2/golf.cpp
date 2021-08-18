#include "golf.h"
#include <iostream>

void setgolf(golf & g, const std::string & name, int hc)
{
	// strncpy(g.fullname, name, Len - 1);
	g.fullname = name;
	// g.fullname[Len - 1] = '\0';
	handicap(g, hc);
}

int setgolf(golf & g)
{
	// char name[Len];
	std::string name;
	int hc;
	std::cout << "Enter golfer name: ";
	// name[0] = '\0';
	// std::cin.get(name, Len);
	std::getline(std::cin, name);
	std::cin.clear();
	if (name.size() == 0)
		return 0;
	std::cout << "Enter golfer handicap: ";
	(std::cin >> hc).get();
	setgolf(g, name, hc);
	return 1;
}

void handicap(golf & g, int hc)
{
	g.handicap = hc;
}

void showgolf(const golf & g)
{
	std::cout << "Player name: " << g.fullname << std::endl;
	std::cout << "Handicap: " << g.handicap << std::endl;
}
