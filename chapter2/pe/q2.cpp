#include <iostream>

int fur_to_yard(int);

int main(void)
{
	using namespace std;

	cout << "distance (furlongs): ";
	int dist;
	cin >> dist;
	cout << "The distance in yards is " << dist * 220 << endl;
}

int fur_to_yard(int fur_dist)
{
	return fur_dist * 220;
}
