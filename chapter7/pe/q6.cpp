#include <iostream>
using namespace std;

int Fill_array(double arr[], int size);
void Show_array(const double arr[], int size);
void Reverse_array(double arr[], int size);
int main()
{
	cout << "Enter size: ";
	int size;
	cin >> size;
	double * arr = new double[size];
	size = Fill_array(arr, size);
	Show_array(arr, size);
	Reverse_array(arr + 1, size - 2);
	Show_array(arr, size);
	delete[] arr;
}

int Fill_array(double arr[], int size)
{
	cout << "Enter array values: ";
	int i = 0;
	while (cin >> arr[i])
		i++;
	return i;
}

void Show_array(const double arr[], int size)
{
	cout << "double{";
	for (int i = 0; i < size; i++)
		cout << arr[i] << ", ";
	cout << "}\n";
}

void Reverse_array(double arr[], int size)
{
	double temp;
	for (int i = 0; i < size / 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[size - i - 1];
		arr[size - i - 1] = temp;
	}
}
