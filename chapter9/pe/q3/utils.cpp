#include "utils.h"
#include <cstring>
#include <iostream>

void set_chaff(chaff & ch, const char * dr, int sl)
{
	ch.dross[len - 1] = '\0';
	strncpy(ch.dross, dr, len - 2);
	ch.slag = sl;
}

int set_chaff(chaff & ch)
{
	char dr[len] = {'\0'};
	std::cout << "Enter dross: ";
	std::cin.get(dr, len);
	if (!dr[0])
		return 0;
	strcpy(ch.dross, dr);
	std::cin.clear();
	while (std::cin.get() != '\n');
	std::cout << "Enter slag: ";
	(std::cin >> ch.slag).get();
	return 1;
}

void show_chaff(const chaff & ch)
{
	std::cout << "Dross: " << ch.dross << std::endl;
	std::cout << "Slug: " << ch.slag << std::endl;
}

