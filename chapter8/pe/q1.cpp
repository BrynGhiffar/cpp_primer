#include <iostream>
using namespace std;

int call_count = 0;
const int LIMIT = 100;
void print(const char * str, int n = 0);

int main()
{
	char str[LIMIT + 1];
	int num;
	cout << "Enter a string, press Ctrl+D to exit:\n";
	while (cin.getline(str, LIMIT + 1)){
		cout << "Enter a number: ";
		(cin >> num).get();
		print(str, num);
	cout << "Enter a string, press Ctrl+D to exit:\n";
	}
	cout << "\nBye.\n";
}

void print(const char * str, int n)
{
	if (n){
		call_count++;
		for (int i = 0; i < call_count; i++)
			cout << str << endl;
	} else {
		cout << str << endl;
		call_count++;
	} 
}

