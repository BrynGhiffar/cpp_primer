// nested.cpp -- nested loops and 2-D array
#include <iostream>
const int Cities = 5;
const int Years = 4;
const char underline[] = "\033[4m"; // using ansi escape sequences for underline
const char no_underline[] = "\033[0m";
const char clear_screen[] = "\033[J";
const char clear_entire_screen[] = "\033[2J";
const char move_home[] = "\033[H";

int main()
{
	using namespace std;

	const char * cities[Cities] = // array of pointers
	{
		"Gribble City",
		"Gribbletown",
		"New Gribble",
		"San Gribble",
		"Gribble Vista"
	};

	int maxtemps[Years][Cities] = // 2-D array
	{
		{96, 100, 87, 101, 105},
		{96, 98, 91, 107, 104},
		{97, 101, 93, 108, 107},
		{98, 103, 95, 109, 108}
	};
	cout << clear_entire_screen;
	cout << move_home;
	cout << underline << "Maximum temperatures for 2008 - 2011\n\n" << no_underline;
	for (int city = 0; city < Cities; ++city)
	{
		cout << cities[city] << ":\t";
		for (int year = 0; year < Years; ++year)
			cout << maxtemps[year][city] << "\t";
		cout << endl;
	}
}
