#include <iostream>

int main()
{
	using namespace std;

	double d_current = 100.0;
	double c_current = 100.0;
	int years = 0;
	while (c_current <= d_current)
	{
		d_current += 10.0; // Daphne invests at 10% simple interest
		c_current *= 1.05; // Cleo invests at 5% compound interest
		years++;
	}
	
	cout << "It took " << years 
		<< " years for Cleo's investment to exceed Daphne's investement"
		<< endl;
	cout << "Daphne's balance: $" << d_current << endl;
	cout << "Cleo's balance: $" << c_current << endl;
}
