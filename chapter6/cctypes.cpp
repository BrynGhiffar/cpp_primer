// cctypes.cpp -- using the ctype.h library
#include <iostream>
#include <cctype>				// prototypes for character functions
int main()
{
	using namespace std;
	cout << "Enter text for analysis, and type @ "
		"to terminate input.\n";
	char ch;
	int nwhitespace = 0;
	int ndigits = 0;
	int nchars = 0;
	int npunct = 0;
	int nothers = 0;

	cin.get(ch);							// get first character
	while (ch != '@')					// test for sentinel
	{
		if (isalpha(ch))				// is it an alphabetic character?
			nchars++;
		else if (isspace(ch))		// is it a whitespace character?
			nwhitespace++;
		else if (isdigit(ch))		// is it a digit?
			ndigits++;
		else if (ispunct(ch))		// is it punctuation?
			npunct++;
		else
			nothers++;
		cin.get(ch);						// get next character
	}

	cout << nchars << " letters, "
			<< nwhitespace << " whitespace, "
			<< ndigits << " digts, "
			<< npunct << " punctuations, "
			<< nothers << " others.\n";
}
