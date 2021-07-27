#include <iostream>

struct CandyBar {
	char brand[30];
	float weight;
	int calorie_count;
};

int main(){
	CandyBar * bars = new CandyBar[3]{
		{"Cadbury", 15.0f, 300},
			{"KitKat", 5.3f, 100},
			{"Hershey's", 2.2f, 50}
	};
	std::cout << bars[0].brand << " ";
	std::cout << bars[0].weight << " ";
	std::cout << bars[0].calorie_count << std::endl;

	std::cout << bars[1].brand << " ";
	std::cout << bars[1].weight << " ";
	std::cout << bars[1].calorie_count << std::endl;

	std::cout << bars[2].brand << " ";
	std::cout << bars[2].weight << " ";
	std::cout << bars[2].calorie_count << std::endl;
	delete[] bars;
}

