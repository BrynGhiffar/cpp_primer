#include "classic.h"
#include <cstring>
#include <iostream>

const int Classic::wlen = 50;

Classic::Classic(const char * w, const char * pf,
		const char * la, int s, double pt)
	: Cd::Cd(pf, la, s, pt)
{
	strncpy(work, w, wlen - 1);
	work[wlen - 1] = '\0';
}

Classic::Classic(const Classic & d)
	: Cd::Cd(d)
{
	strncpy(work, d.work, wlen - 1);
	work[wlen - 1] = '\0';
}

Classic::Classic()
	: Cd()
{
	strncpy(work, "None", wlen - 1);
	work[wlen - 1] = '\0';
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
	strncpy(work, d.work, wlen - 1);
	work[wlen - 1] = '\0';
	return *this;
}
