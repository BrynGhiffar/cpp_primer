#include "golf.h"
#include <iostream>

int main()
{
	Golf players[3];
	using std::cout;
	using std::endl;
	int i = 0;
	while (i < 3 && players[i].setgolf())
		i++;
	for (int j = 0; j < i; j++)
		players[j].showgolf();
}
 
