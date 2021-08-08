#include <iostream>

long double factorial(int n);

int main()
{
	std::cout << "Enter a number: ";
	int num;
	while (std::cin >> num)
	{
		std::cout << num << "! = " << factorial(num) 
			<< std::endl;
		std::cout << "Enter another number (press q to exit): ";
	}
	std::cout << "Bye\n";
}

long double factorial(int n)
{
	if (n == 0)
		return 1;
	return factorial(n - 1) * n;
}
