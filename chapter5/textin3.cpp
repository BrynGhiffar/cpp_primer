// textin3.cpp -- reading chars to end of file

#include <iostream>

int main() {
	using namespace std;

	char ch;
	int count = 0;

	cin.get(ch);
	while (cin.fail() == false){
		cout << ch;
		// if (ch != '\n')
			++count;
		cin.get(ch);
	}
	cout << endl << count << " characters read\n";
}
