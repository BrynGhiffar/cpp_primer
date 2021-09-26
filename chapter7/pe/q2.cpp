#include <iostream>
using namespace std;
const int NSCORES = 10;
int fill_scores(int arr[], int size);
void show_scores(const int arr[], int size);
float mean(const int arr[], int size);
int main()
{
	int arr[NSCORES];
	int size = fill_scores(arr, NSCORES);
	show_scores(arr, size);
	float ave = mean(arr, size);
	cout << "Average: " << ave << endl;
}

int fill_scores(int arr[], int size)
{
	int scores[NSCORES];
	cout << "Enter 10 golf scores (press q to terminate input): ";
	// cin >> temp;
	int i;
	// int i = 0;
	// while (temp > 0)
	// {
	// 	scores[i] = temp;
	// 	i++;
	// 	cin >> temp;
	// }
	for (i = 0; i < NSCORES; i++)
	{
		cin >> arr[i];
		if (!cin)
			break;
	}
	return i;
}

void show_scores(const int arr[], int size)
{
	cout << "scores: ";
	for (int j = 0; j < size; j++)
		cout << arr[j] << " ";
	cout << endl;
}

float mean(const int arr[], int size)
{
	float total = 0;
	for (int j = 0; j < size; j++)
		total += arr[j];
	return total / size;
}
