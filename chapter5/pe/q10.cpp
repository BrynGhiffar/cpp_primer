#include <iostream>

int main()
{
	using namespace std;
	int row_count = 0;
	cout << "Enter number of rows: ";
	cin >> row_count;
	for (int i = 0; i < row_count; i++){
		for (int j = 0; j < row_count - i - 1; cout << '.', j++);
		for (int j = 0; j < i + 1; cout << '*', j++);
		cout << "\n";
	}
}

