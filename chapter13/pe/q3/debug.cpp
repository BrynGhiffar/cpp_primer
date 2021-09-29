#include <iostream>
#include "dma.h"

int main()
{
	abcDMA * arr[2];
	arr[0] = new hasDMA("Ancient", "Jordan", 100);
	arr[1] = new lacksDMA;
	lacksDMA l("red", "lacks", 50);
	baseDMA b("base", 10);
	abcDMA & al = l;
	al = b;
	arr[1]->operator=(*arr[0]);
	arr[0]->View();
	arr[1]->View();
	al.View();
}
