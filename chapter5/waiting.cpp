// waiting.cpp -- using clock() in a time-delay loop
#include <iostream>
#include <ctime>

int main() {
	using namespace std;
	cout << "Enter the delay time, in seconds: ";
	float secs;
	cin >> secs;

	clock_t delay = secs * CLOCKS_PER_SEC; // Convert the clock to tics
	cout << "starting\a\n";
	clock_t start = clock();
	while (clock() - start < delay);
	// clock() - start is the number of cpu tics after the
	// program has started
	cout << "done \a\n";
}
