#include <iostream>

int to_months(int);

int main()
{
	using namespace std;
	cout << "Enter your age: ";
	int age;
	cin >> age;
	cout << "Your age in months is " << to_months(age) << "." << endl;

}

int to_months(int years)
{
	return years * 12;
}
