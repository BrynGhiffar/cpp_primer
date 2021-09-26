#include "utils.h"
#include <iostream>

namespace SALES
{
	void setSales(Sales & s, const double ar[], int n)
	{
		if (n > 4)
			n = 4;

		if (n > 0)
		{
			s.max = ar[0];
			s.min = ar[0];
			for (int i = 0; i < n; i++)
			{
				s.average += ar[i];
				s.sales[i] = ar[i];
				if (s.max < ar[i])
					s.max = ar[i];
				if (s.min > ar[i])
					s.min = ar[i];
			}
			s.average = s.average / n;
			for (int i = n; i < 4; i++)
				s.sales[i] = 0;
		}
	}

	void setSales(Sales & s)
	{
		double sales[QUARTERS];
		int n;
		std::cout << "Enter quarters passed: ";
		std::cin >> n;
		// Enter sales for 3 quarter/s:
		std::cout << "Enter sales for " << n << " quarter/s: "; 
		for (int i = 0; i < n; i++)
			std::cin >> sales[i];
		setSales(s, sales, n);
	}

	void showSales(const Sales & s)
	{
		std::cout << "sales: ";
		for (int i = 0; i < QUARTERS; i++)
			std::cout << s.sales[i] << " ";
		std::cout << std::endl;
		std::cout << "average: " << s.average << std::endl;
		std::cout << "max: " << s.max << std::endl;
		std::cout << "min: " << s.min << std::endl;
	}
}
