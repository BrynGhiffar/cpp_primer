#include <iostream>

int main()
{
	using namespace std;

	int current;
	int total = 0;
	while ((cin >> current, current) != 0)
		total += current;
	cout << "The sum of the numbers listed is " 
		<< total << endl;
		
}
