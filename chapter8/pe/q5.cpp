#include <iostream>

const int LIMIT = 5;

template <typename T>
T max5(T arr[LIMIT])
{
	T mval = arr[0];
	for (int i = 1; i < LIMIT; i++)
		if (mval < arr[i])
			mval = arr[i];
	return mval;
}

int main()
{
	int arri[LIMIT] = {3, 1, 4, -1, -5};
	double arrd[LIMIT] = {2.0, 1.0, 7.5, 8.8, -3.0};

	std::cout << max5(arri) << std::endl;
	std::cout << max5(arrd) << std::endl;
	return 0;
}
