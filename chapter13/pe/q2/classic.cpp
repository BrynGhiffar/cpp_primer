#include "classic.h"
#include <cstring>
#include <iostream>

Classic::Classic(const char * w, const char * pf,
		const char * la, int s, double pt)
	: Cd::Cd(pf, la, s, pt)
{
	work = new char[strlen(w) + 1];
	strcpy(work, w);
}

Classic::Classic(const Classic & d)
	: Cd::Cd(d)
{
	work = new char[strlen(d.work) + 1];
	strcpy(work, d.work);
}

Classic::Classic()
	: Cd()
{
	work = new char[5];
	strcpy(work, "None");
}

Classic::~Classic()
{
	delete [] work;
}

void Classic::Report() const
{
	Cd::Report();
	std::cout << "work: " << work << '\n';
}

Classic & Classic::operator=(const Classic & d)
{
	if (this == &d)
		return *this;
	Cd::operator=(d);
	delete [] work;
	work = new char[strlen(d.work) + 1];
	strcpy(work, d.work);
	return *this;
}
