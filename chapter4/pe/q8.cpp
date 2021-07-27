#include <iostream>

const int MAX_COMPANY_NAME = 30;

struct Pizza {
	char company_name[MAX_COMPANY_NAME + 1];
	int diam;
	float weight;
};

int main(){
	Pizza * dpizza = new Pizza;
	std::cout << "Enter diameter of pizza: ";
	(std::cin >> dpizza->diam).get();// get newline character out
	std::cout << "Enter company name: ";
	std::cin.getline(dpizza->company_name, MAX_COMPANY_NAME + 1);
	std::cout << "Enter weight of pizza: ";
	std::cin >> dpizza->weight;
	std::cout << "company name: " << dpizza->company_name << std::endl;
	std::cout << "pizza diameter: " << dpizza->diam << std::endl;
	std::cout << "pizza weight: " << dpizza->weight << std::endl;
	delete dpizza;
}
