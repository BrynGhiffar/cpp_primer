#include <iostream>
#include <cstring>

template <typename T>
T maxn(T arr[], int n)
{
	T mval = arr[0];
	for (int i = 1; i < n; i++)
		if (mval < arr[i])
			mval = arr[i];
	return mval;
}

template <>
char * maxn<char *>(char * strs[], int n)
{
	char * mval = strs[0];
	for (int i = 0; i < n; i++)
		if (strlen(mval) < strlen(strs[i]))
			mval = strs[i];
	return mval;
}

int main()
{
	int arri[6] = {5, 1, 3, 1, 0, 9};
	double arrd[4] = {3.3, 1.9, 0.5, 9.8};
	const char * strs[5] = {
		"a",
		"aa",
		"aaa",
		"aa",
		"a"
	};
	std::cout << maxn(arri, 6) << std::endl;
	std::cout << maxn(arrd, 4) << std::endl;
	std::cout << maxn(strs, 5) << std::endl;
}

