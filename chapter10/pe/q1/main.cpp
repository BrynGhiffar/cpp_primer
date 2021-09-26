#include <iostream>
#include "account.h"

int main()
{
	std::cout << "Creating account...\n";
	Account Bryn("Bryn Ghiffar", "0123456789", 100.0);
	Bryn.show();

	std::cout << "Attempting to withdraw $1000.0 ...\n";
	Bryn.withdraw(1000.0);
	Bryn.show();
	
	std::cout << "Attempting to deposit -$10 ...\n";
	Bryn.deposit(-10);
	Bryn.show();

	std::cout << "Attempting to deposit $150.0 ...\n";
	Bryn.deposit(150.0);
	Bryn.show();

	std::cout << "Attempting to withdraw $250.0 ...\n";
	Bryn.withdraw(250.0);
	Bryn.show();


}
