#include <iostream>
#include <cstring>

int main(){
	const int MAX_NAME_SIZE = 20;
	char first_name[MAX_NAME_SIZE + 1];
	char last_name[MAX_NAME_SIZE + 1];

	std::cout << "Enter your first name: ";
	std::cin.getline(first_name, MAX_NAME_SIZE + 1);
	std::cout << "Enter your last name: ";
	std::cin.getline(last_name, MAX_NAME_SIZE + 1);
	char full_name[MAX_NAME_SIZE * 2];
	std::strcpy(full_name, last_name);
	std::strcat(full_name, ", ");
	std::strcat(full_name, first_name);
	std::cout << "Here's the information in a single string: "
						<< full_name << std::endl;
}
