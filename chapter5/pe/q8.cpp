#include <iostream>
#include <cstring>

const int MAX_CHAR = 30;

int main()
{
	using namespace std;
	char current[MAX_CHAR + 1];
	int word_count = 0;
	cout << "Enter words (to stop, type the word done):\n";
	while((cin >> current, strcmp(current, "done")) != 0)
		word_count++;
	cout << "You entered a total of " << word_count << " words.\n";
}
