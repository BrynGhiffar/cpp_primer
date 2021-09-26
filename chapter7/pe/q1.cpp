#include <iostream>

double get_harmonic_mean(double x, double y);
int main()
{
	using namespace std;
	double res, x, y;
	do {
	cout << "Enter a pair of numbers: ";
	cin >> x >> y;
	res = get_harmonic_mean(x, y);
	cout << "Harmonic mean: " << res << endl;
	} while (x && y);
	cout << "\nDone\n";
}

double get_harmonic_mean(double x, double y)
{
	return (2.0 * x * y) / (x + y);
}
