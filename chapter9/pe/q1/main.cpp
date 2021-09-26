#include "golf.h"
#include <iostream>

int main()
{
	golf players[3];
	using std::cout;
	using std::endl;
	int i = 0;
	while (i < 3 && setgolf(players[i]))
		i++;
	for (int j = 0; j < i; j++)
		showgolf(players[j]);
}
