#include <iostream>

int main(){
	const int MAX_NAME_LENGTH = 20;
	char first_name[MAX_NAME_LENGTH + 1]; // the extra index is for
																				// the null terminator
	char last_name[MAX_NAME_LENGTH + 1];
	char grade;
	int age;
	std::cout << "What is your first name? ";
	std::cin.getline(first_name, MAX_NAME_LENGTH + 1);
	std::cout << "What is your last name? ";
	std::cin.getline(last_name, MAX_NAME_LENGTH + 1);
	std::cout << "What is the letter grade you deserve? ";
	std::cin >> grade;
	grade = grade + 1;
	std::cout << "What is your age? ";
	std::cin >> age;
	std::cout << "Name: " << last_name << ", " << first_name << std::endl;
	std::cout << "Grade: " << grade << std::endl;
	std::cout << "Age: " << age << std::endl;
}
