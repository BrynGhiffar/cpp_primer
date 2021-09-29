#include <iostream>
#include "port.h"

int main()
{
	Port myPort("My Brand", "Classic", 100);
	myPort.Show();
	std::cout << myPort << '\n';
	std::cout << '\n';

	VintagePort hisPort("His Brand", 10, "Jollie's Port", 1990);
	std::cout << hisPort << '\n';
	hisPort.Show();
	std::cout << '\n';

	myPort = hisPort;
	myPort.Show();
	Port & a = hisPort;
	a.Show();
}
