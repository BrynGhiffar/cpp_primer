#include <iostream>

void display_time(int hr, int mnt);

int main()
{
	using std::cout;
	using std::endl;
	using std::cin;
	cout << "Enter the number of hours: ";
	int hr;
	cin >> hr;
	cout << "Enter the number of minutes: ";
	int mnt;
	cin >> mnt;
	display_time(hr, mnt);
}

void display_time(int hr, int mnt)
{
	using std::cout;
	using std::endl;
	cout << "Time: " << hr << ":" << mnt << endl;
}
