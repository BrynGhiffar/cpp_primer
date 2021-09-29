#include "cd.h"
#include <cstring>
#include <iostream>

Cd::Cd(const char * pf, const char * la, int s, double pt)
{
	performers = new char[strlen(pf) + 1];
	strcpy(performers, pf);
	lable = new char[strlen(la) + 1];
	strcpy(lable, la);
	selections = s; playtime = pt;
}

Cd::Cd(const Cd & d)
{
	performers = new char[strlen(d.performers) + 1];
	strcpy(performers, d.performers);
	lable = new char[strlen(d.lable) + 1];
	strcpy(lable, d.lable);
	selections = d.selections; playtime = d.playtime;
}

Cd::Cd()
{
	performers = new char[5];
	strcpy(performers, "None");
	lable = new char[5];
	strcpy(lable, "None");
	selections = 0; playtime = 0.0;
}

Cd::~Cd() {
	delete [] performers;
	delete [] lable;
}

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

	delete [] performers;
	performers = new char[strlen(d.performers) + 1];
	strcpy(performers, d.performers);

	delete [] lable;
	lable = new char[strlen(d.lable) + 1];
	strcpy(lable, d.lable);
	selections = d.selections; playtime = d.playtime;
	return *this;
}


