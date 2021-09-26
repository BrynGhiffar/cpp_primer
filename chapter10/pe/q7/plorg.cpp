#include "plorg.h"
#include <cstring>
#include <iostream>

Plorg::Plorg(const char name[], int ci)
{
	m_name[LEN] = '\0';
	strncpy(m_name, name, LEN);
	m_ci = ci;
}

void Plorg::update_ci(int ci)
{
	m_ci = ci;
}

void Plorg::show() const
{
	std::cout << "Name: " << m_name << std::endl;
	std::cout << "Contentment Index: " << m_ci << std::endl;
}
