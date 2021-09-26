#include <iostream>
#include "move.h"

int main()
{
	using std::cout;
	using std::endl;

	cout << "Creating move objects...\n";
	Move point;
	Move ppoint(1, 2);
	Move pppoint(1);
	point.showmove();
	ppoint.showmove();
	pppoint.showmove();

	cout << "Resetting first move object...\n";
	point.reset(3, 3);
	point.showmove();

	cout << "Adding first move object to second move object...\n";
	point.add(ppoint).showmove();
}
