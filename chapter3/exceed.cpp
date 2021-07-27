// exceed.cpp -- exceeding some integer limits
#include <iostream>
#define ZERO 0
#include <climits>

int main()
{
	using namespace std;
	int sam = INT_MAX;
	unsigned sue = sam;
	cout << "Sam's balance: $" << sam << endl;
	cout << "Sue's balance: $" << sue << endl;
	cout << "$1 is added to each account" << endl;
	sam = sam + 1;
	sue = sue + 1;
	cout << "Sam's balance: $" << sam << endl;
	cout << "Sue's balance: $" << sue << endl;
	cout << endl;

	sam = ZERO;
	sue = ZERO;
	cout << "Sam's balance: $" << sam << endl;
	cout << "Sue's balance: $" << sue << endl;
	cout << "$1 is subtracted from each account" << endl;
	sam = sam - 1;
	sue = sue - 1;
	cout << "Sam's balance: $" << sam << endl;
	cout << "Sue's balance: $" << sue << endl;
}
