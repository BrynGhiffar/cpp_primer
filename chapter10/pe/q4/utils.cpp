#include "utils.h"
#include <iostream>

namespace SALES
{
	Sales::Sales(const double ar[], int n)
	{
		if (n > 4)
			n = 4;

		if (n > 0)
		{
			max = ar[0];
			min = ar[0];
			average = 0;
			for (int i = 0; i < n; i++)
			{
				average += ar[i];
				sales[i] = ar[i];
				if (max < ar[i])
					max = ar[i];
				if (min > ar[i])
					min = ar[i];
			}
			average = average / n;
			for (int i = n; i < 4; i++)
				sales[i] = 0;
		}
	}

	void Sales::setSales()
	{
		double sales[QUARTERS];
		int n;
		std::cout << "Enter quarters passed: ";
		std::cin >> n;
		// Enter sales for 3 quarter/s:
		std::cout << "Enter sales for " << n << " quarter/s: "; 
		for (int i = 0; i < n; i++)
			std::cin >> sales[i];
		Sales temp = Sales(sales, n);
		*this = temp;
	}

	void Sales::showSales() const
	{
		std::cout << "sales: ";
		for (int i = 0; i < QUARTERS; i++)
			std::cout << sales[i] << " ";
		std::cout << std::endl;
		std::cout << "average: " << average << std::endl;
		std::cout << "max: " << max << std::endl;
		std::cout << "min: " << min << std::endl;
	}
}
