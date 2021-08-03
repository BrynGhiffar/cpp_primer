#include <iostream>
using namespace std;
const int MAXDONATION = 10;
int main()
{
	double donations[MAXDONATION];
	int count = 0;
	double total = 0;
	while ((count < MAXDONATION) && (cin >> donations[count]))
	{
		total += donations[count];
		count++;
	}
	cout.precision(2);
	cout << fixed;
	cout.setf(ios_base::showpoint);
	cout << "Average donations: $"<< total / count << endl;
	int better = 0;
	for (int i = 0; i < count; i++)
	{
		if (donations[i] > total / count)
			better++;
	}
	cout << better << " donations are higher than average.\n";
}	
