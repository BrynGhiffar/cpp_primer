#include <iostream>
#include <string>

void capitalize(std::string & str);

int main()
{
	std::string str;
	std::cout << "Enter a string (q to quit): ";
	std::getline(std::cin, str);
	while (str != "q"){
		capitalize(str);
		std::cout << str << std::endl;
		std::cout << "Enter a string (q to quit): ";
		std::getline(std::cin, str);
	}
	std::cout << "Bye.\n";
}

void capitalize(std::string & str)
{
	for (int i = 0; i < str.size(); i++)
		str[i] = toupper(str[i]);
}
