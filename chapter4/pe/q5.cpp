#include <iostream>

struct CandyBar {
	char brand[30];
	float weight;
	int calorie_count;
};

int main(){
	CandyBar snack {"Mocha Munch", 2.3f, 350};
	std::cout << snack.brand << " ";
	std::cout << snack.weight << " ";
	std::cout << snack.calorie_count << std::endl;
}
