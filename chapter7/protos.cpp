// protos.cpp -- using prototypes and function calls
#include <iostream>
void cheers(int);					// prototype: no return value
double cube(double x);		// prototype: returns a double
int main()
{
	using namespace std;

	cheers(5);
	cout << "Give me a numner: ";
	double side;
	cin >> side;
	double volume = cube(side);
	cout << "A " << side << "-foot cube has a volume of ";
	cout << volume << " cubic feeet.\n";
	cheers(cube(2)); // prototype protection at work
}

void cheers(int n)
{
	using namespace std;
	for (int i = 0; i < n; i++)
		cout << "Cheers! ";
	cout << endl;
}

double cube(double x)
{
	return x * x * x;
}

