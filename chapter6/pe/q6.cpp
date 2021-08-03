#include <iostream>

const int MAXCHAR = 30;

struct SocMem{
	char name[MAXCHAR];
	double contrib;
};

int main()
{
	using namespace std;
	int ncont;
	cout << "Enter number of contributors: ";
	(cin >> ncont).get();
	SocMem * mems = new SocMem[ncont];
	for (int i = 0; i < ncont; i++)
	{
		cout << "Contributor #" << i + 1 << endl;
		cout << "Enter name: ";
		cin.getline(mems[i].name, MAXCHAR);
		cout << "Enter contribution amount: ";
		(cin >> mems[i].contrib).get();
	}
	const int GRAND_LIMIT = 10000;
	int grand_count = 0;
	cout << "Grand Patrons" << endl;
	for (int i = 0; i < ncont; i++)
	{
		if (mems[i].contrib >= GRAND_LIMIT){
			cout << "Name: " << mems[i].name << endl;
			cout << "Amount donated: $" << mems[i].contrib << endl;
			grand_count++;
		}
	}
	if (!grand_count)
		cout << "none\n";
	cout << "Patrons" << endl;
	for (int i = 0; i < ncont; i++)
	{
		if (mems[i].contrib < GRAND_LIMIT) {
			cout << "Name: " << mems[i].name << endl;
			cout << "Amount donated: $" << mems[i].contrib << endl;
		}
	}
	if (!(ncont - grand_count))
		cout << "none\n";
	delete[] mems;
}
