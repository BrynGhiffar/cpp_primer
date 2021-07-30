#include <iostream>

int main()
{
	using namespace std;
	int start, end;
	cout << "Enter starting integer: ";
	cin >> start;

	cout << "Enter ending integer: ";
	cin >> end;
	int total = 0;
	for (int i = start;i <= end;total += i, i++);
	cout << "The sum of integers between "
			<< start << " and " << end << " is "
			<< total << endl;
}

