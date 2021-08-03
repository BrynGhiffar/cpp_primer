#include <iostream>


int main(){
	using namespace std;
	double income;
	double taxing[] = {0, 0.1, 0.15, 0.2};
	int levels[] = {5000, 10000, 20000, 35000};
	cout << "Enter income: ";
	while ((cin >> income) && (income >= 0))
	{
		int tax = 0;
		int i = 0;
		while (income > 0){
			tax += (income >= levels[i]) ?
				(levels[i] * taxing[i]) : (income * taxing[i]);
			income -= levels[i];
			if (i < 3)
				i++;
		}
		cout << "tax: $" << tax << endl;
		cout << "Enter income: ";
	}
}
