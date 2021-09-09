#include <iostream>
#include <cstring>
#include "cow.h"

Cow::Cow()
{
	const char * t = "Joe";
	for (int i = 0; i < 3; i++) name[i] = t[i];
	hobby = new char[1];
	hobby[0] = '\0';
	weight = 0.0;
}

Cow::Cow(const char * nm, const char * ho, double wt)
{
	strncpy(name, nm, 19);
	name[19] = '\0';
	int len = strlen(ho);
	hobby = new char[len + 1];
	strcpy(hobby, ho);
	hobby[len] = '\0';
	weight = wt;
}

Cow::Cow(const Cow & c)
{
	strncpy(name, c.name, 19);
	name[19] = '\0';
	int len = strlen(c.hobby);
	hobby = new char[len + 1];
	strcpy(hobby, c.hobby);
	hobby[len] = '\0';
	weight = c.weight;
	// Cow(c.name, c.hobby, c.weight);
}

Cow::~Cow()
{
	delete[] hobby;
}

Cow & Cow::operator=(const Cow & c)
{
	strncpy(name, c.name, 19);
	name[19] = '\0';
	int len = strlen(c.hobby);
	hobby = new char[len + 1];
	strcpy(hobby, c.hobby);
	hobby[len] = '\0';
	weight = c.weight;
	return *this;
}

void Cow::ShowCow() const
{

	std::cout << "name: " << name << '\n';
	std::cout << "hobby: " << hobby << '\n';
	std::cout << "weight: "<< weight << '\n';
}

