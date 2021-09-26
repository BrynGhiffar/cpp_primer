#include <iostream>

const int MAX_CHAR = 30;
struct car {
	char car_make[MAX_CHAR + 1];
	int year_built;
};

int main()
{
	using namespace std;

	int catalog_count;
	cout << "How many cars do you wish to catalog? ";
	(cin >> catalog_count).get();
	car* the_cars = new car[catalog_count];
	for (int i = 0; i < catalog_count; i++){
		cout << "Car #" << i + 1 << ":\n";
		cout << "Please enter the make: ";
		cin.getline(the_cars[i].car_make, MAX_CHAR + 1);
		cout << "Please enter the year made: ";
		(cin >> the_cars[i].year_built).get();
	}
	cout << "Here is your collection:\n";
	for (int i = 0; i < catalog_count; i++)
		cout << the_cars[i].year_built << " " << the_cars[i].car_make << endl;


	delete[] the_cars;
}
