// 7.15 arrobj.cpp -- functions with array objects (C++11)
#include <iostream>
#include <array>
#include <string>

// constant data
const int Seasons = 4;
// const std::array<std::string, Seasons> Snames = 
const char * Snames[Seasons] = 
{"Spring", "Summer", "Fall", "Winter"};

struct QrtExpenses
{
	double expenses[Seasons];
};

// function to modify array object
void fill(QrtExpenses *  pa);
// function that uses object without modifying it
void show(QrtExpenses da);

int main()
{
	QrtExpenses mine;
	fill(&mine);
	show(mine);
	return 0;
}

void fill(QrtExpenses * pa)
{
	using namespace std;
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Enter " << Snames[i] << " expenses: $";
		cin >> pa->expenses[i];
	}
}

void show(QrtExpenses da)
{
	using namespace std;
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << ": $" << da.expenses[i] << endl;
		total += da.expenses[i];
	}
	cout << "Total Expenses: $" << total << endl;
}


