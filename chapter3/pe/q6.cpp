#include <iostream>

int main(){
	using namespace std;

	cout << "Enter distance driven, petrol used:\n";
	long long dist;
	cout << "Enter distance driven (km): "; cin >> dist;
	long long petrol;
	cout << "Enter petrol used (litres): "; cin >> petrol;
	const double d100km = 100.0;
	cout << "petrol consumption (litres / 100 km): " << (double) petrol 
														/ ((double) dist / d100km) << endl;
}
