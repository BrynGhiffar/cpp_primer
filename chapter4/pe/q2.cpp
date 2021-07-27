#include <iostream>
#include <string>

int main(){
	const int MAX_NAME_LENGTH = 20;
	std::string first_name; // the extra index is for
						 				// the null terminator
	std::string last_name;
	char grade;
	int age;
	std::cout << "What is your first name? ";
	std::getline(std::cin, first_name);
	std::cout << "What is your last name? ";
	std:getline(std::cin, last_name);
	std::cout << "What is the letter grade you deserve? ";
	std::cin >> grade;
	grade = grade + 1;
	std::cout << "What is your age? ";
	std::cin >> age;
	std::cout << "Name: " << last_name << ", " << first_name << std::endl;
	std::cout << "Grade: " << grade << std::endl;
	std::cout << "Age: " << age << std::endl;
}
