#include <iostream>
using namespace std;
#include <cstring>		// for strlen(), strcpy()
struct stringy {
	char * str;			// points to a string
	int ct;					// length of string (not counting '\0')
};

// prototypes for set(), show(), and show() go here
void dset(stringy & strob, const char * strarr);
void show(const stringy & strob, int times = 1);
void show(const char * strob, int times = 1);

int main()
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";

	dset(beany, testing);		// first argument is a reference,
													// allocates space to hold copy of testing,
													// sets str member of beany to point to the
													// new block, copies testing to new block,
													// and sets ct member of beany
	show(beany);						// prints member string once
	show(beany, 2);					// prints member string twice
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);					// prints testing string once
	show(testing, 3);				// prints testing string thrice
	show("Done!");
	delete[] beany.str;
	return 0;
}

void dset(stringy & strob, const char * strarr)
{
	strob.ct = strlen(strarr);
	strob.str = new char[strob.ct + 1];
	strcpy(strob.str, strarr);
}

void show(const stringy & strob, int times)
{
	for (int i = 0; i < times; i++)
		cout << strob.str << endl;
}

void show(const char * strarr, int times)
{
	for (int i = 0; i < times; i++)
		cout << strarr << endl;
}
