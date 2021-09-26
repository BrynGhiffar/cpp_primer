// 7.4 lotto.cpp -- probability of winning
#include <iostream>
// Note: some implementations require double instead of long double
long double probability(unsigned numbers, unsigned picks);
int main()
{
	using namespace std;
	double total, choices, mega_num;

	cout << "Enter the total number of choices on the game card, \n"
		"the number of picks allowed and the total number of choices\n"
		"to choose the mega number from:\n";
	while ((cin >> total >> choices >> mega_num) && choices <= total)
	{
		cout << "You have one chance in ";
		cout << probability(total, choices) * probability(mega_num, 1); // comput the odds
		cout << " of winning.\n";
		cout << "Next three numbers (q to quit): ";
	}

	cout << "bye\n";
	return 0;
}

// the following function calculate the probability of picking picks
// numbers correctly from numbers choices
long double probability(unsigned number, unsigned picks)
{
	long double result = 1.0; 		// here come some local variables
	long double n;
	unsigned p;

	for (n = number, p = picks; p > 0; n--, p--)
		result = result * n / p;
	return result;
}
