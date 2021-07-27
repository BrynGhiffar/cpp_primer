#include <iostream>
#include <array>

int main() {
	std::array<int, 3> times;
	std::cout << "Enter time for 1st 40-meter dash (seconds): ";
	std::cin >> times[0];
	std::cout << "Enter time for 2nd 40-meter dash (seconds): ";
	std::cin >> times[1];
	std::cout << "Enter time for 3nd 40-meter dash (seconds): ";
	std::cin >> times[2];
	std::cout << "Average: " << (times[0] + times[1] + times[2]) / 3
						<< " seconds\n";
}
