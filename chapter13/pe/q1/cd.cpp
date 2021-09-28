#include "cd.h"
#include <cstring>
#include <iostream>

Cd::Cd(const char * pf, const char * la, int s, double pt)
{
	strncpy(performers, pf, 49);
	performers[49] = '\0';
	strncpy(lable, la, 19);
	lable[19] = '\0';
	selections = s; playtime = pt;
}

Cd::Cd(const Cd & d)
{
	strncpy(performers, d.performers, 49);
	performers[49] = '\0';
	strncpy(lable, d.lable, 19);
	lable[19] = '\0';
	selections = d.selections; playtime = d.playtime;
}

Cd::Cd()
{
	strncpy(performers, "None", 49);
	performers[49] = '\0';
	strncpy(lable, "None", 19);
	lable[19] = '\0';
	selections = 0; playtime = 0.0;
}

Cd::~Cd() {}

void Cd::Report() const
{
	std::cout << "performers: " << performers << '\n';
	std::cout << "lable: " << lable << '\n';
	std::cout << "selections: " << selections << '\n';
	std::cout << "playtime: " << playtime << '\n';
}

Cd & Cd::operator=(const Cd & d)
{
	if (this == &d)
		return *this;
	strncpy(performers, d.performers, 49);
	performers[49] = '\0';
	strncpy(lable, d.lable, 19);
	lable[19] = '\0';
	selections = d.selections; playtime = d.playtime;
	return *this;
}


