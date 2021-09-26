#include <iostream>

int main()
{
	using namespace std;

	const int MONTH_COUNT = 12;
	const char * months[MONTH_COUNT] = 
	{
			"January",
			"February",
			"March",
			"April",
			"May",
			"June",
			"July",
			"August",
			"September",
			"October",
			"November",
			"December"
	};
	int sales[MONTH_COUNT];
	for (int i = 0; i < MONTH_COUNT; i++)
	{
		cout << "Enter " << months[i] << " sales (books): ";
		cin >> sales[i];
	}
	int total = 0;
	for (int i = 0; i < MONTH_COUNT; total += sales[i], i++);
	cout << "This year " << total << " books were sold.\n";
}
