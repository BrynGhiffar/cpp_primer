// ifelse.cpp -- using the if else statement
#include <iostream>

int main()
{
	char ch;

	std::cout << "Type, and I shall repeat.\n";
	std::cin.get(ch);

	while (ch != '.')
	{
		if (ch == '\n')
			std::cout << ch; // done i newline
		else
			std::cout << ++ch; // done otherwise
		std::cin.get(ch);
	}
	// try ch + 1 instad of ++ch for interesting effectt
	std::cout << "\nPlease excuse the slight confusion.\n";
	// std::cin.get();
	// std::cin.get();
}
