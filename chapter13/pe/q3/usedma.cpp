// 13.16 usedma.cpp -- inheritance, friends, and DMA
// compile with dma.cpp

#include <iostream>
#include "dma.h"

int main()
{
	using std::cout;
	using std::endl;

	baseDMA shirt("Portabelly", 8);
	lacksDMA balloon("red", "Blimpo", 4);
	hasDMA meep("mercator", "Buffalo Keys", 5);
	cout << "Displaying baseDMA object:\n";
	cout << shirt << endl;
	cout << "Displaying lacksDMA object:\n";
	cout << balloon << endl;
	cout << "Displaying hasDMA object:\n";
	cout << meep << endl;
	
	lacksDMA balloon2(balloon);
	cout << "result of lacksDMA copy:\n";
	cout << balloon2 << endl;
	hasDMA meep2;
	meep2 = meep; // using the hasDMA assignment operator
	cout << "Result of hasDMA assignment:\n";
	cout << meep2 << endl;
	return 0;
}
