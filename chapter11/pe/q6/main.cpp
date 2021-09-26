#include <iostream>
#include "stonewt.h"

int main()
{
	using std::cout;
	using std::endl;
	using std::cin;
	Stonewt arr[6] = {Stonewt(12, 0.0), Stonewt(15, 5.1), Stonewt(11, 0.5)};
	double tpounds;
	for (int i = 3; i < 6; i++)
	{
		cout << "Enter weight in pounds: ";
		cin >> tpounds;
		arr[i] = Stonewt(tpounds);
	}
	Stonewt weight = Stonewt(11, 0.0);
	Stonewt * max_stone = &arr[0];
	Stonewt * min_stone = &arr[0];
	int count = 0;
	for (int i = 0; i < 6; i++)
	{
		if (arr[i] >= weight)
			count++;
		if (arr[i] > *max_stone)
			max_stone = &arr[i];
		if (arr[i] < *min_stone)
			min_stone = &arr[i];
	}
	cout << "Max element: " << endl;
	max_stone->show_lbs();
	max_stone->show_stn();

	cout << "Min element: " << endl;
	min_stone->show_lbs();
	min_stone->show_stn();

	cout << "Elements greater than 11 stone: " << count << endl;
}
