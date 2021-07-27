#include <iostream>

int main(){
	using namespace std;

	cout << "Enter the world's population: ";
	long long world_pop; cin >> world_pop;
	cout << "Enter the population of Indonesia: ";
	long long indo_pop; cin >> indo_pop;
	long double percentage = (long double) indo_pop 
													/ (long double) world_pop * 100.0;
	cout << "The population of Indonesia is " << percentage 
			<< "\% of the world population.\n";

}
