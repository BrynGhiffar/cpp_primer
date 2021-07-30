#include <iostream>

int main()
{
	using namespace std;

	const int MONTH_COUNT = 12;
	const int YEAR_COUNT = 3;
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
	int sales[MONTH_COUNT][YEAR_COUNT];
	for (int j = 0; j < YEAR_COUNT; j++){
		for (int i = 0; i < MONTH_COUNT; i++)
		{
			cout << "Enter books sold in " << months[i] 
				<< " of year " << j + 1 << ": ";
			cin >> sales[i][j];
		}
	}
	int total = 0;
	int yearly_total;
	for (int j = 0; j < YEAR_COUNT; j++){
		yearly_total = 0;
		for (int i = 0; i < MONTH_COUNT; yearly_total += sales[i][j], i++);
		total += yearly_total;
		cout << "In Year " << j + 1 << ", " 
			<< yearly_total << " books were sold.\n";
	}
	cout << "Total books sold: " << total << " books.\n";
}
