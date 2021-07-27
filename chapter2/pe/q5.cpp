#include <iostream>

double to_deg_f(double);

int main()
{
	using namespace std;
	cout << "Please enter a celsius value: ";
	double deg_c;
	cin >> deg_c;
	cout << deg_c << " degrees celsius is " << to_deg_f(deg_c)
			 << " degrees Fahrenheit." << endl;

}

double to_deg_f(double deg_c)
{
	return 1.8 * deg_c + 32.0;
}
