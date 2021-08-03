#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
const int MAXFILENAME = 30;
const int MAXCHAR = 30;

struct SocMem{
	char name[MAXCHAR];
	double contrib;
};

int main()
{
	using namespace std;
	// ask for filename
	ifstream infile;
	char filename[MAXFILENAME];
	cout << "Enter filename: ";
	cin.getline(filename, MAXFILENAME);
	infile.open(filename);
	if (!infile.is_open())
	{
		cout << "Could not open file " << filename << endl;
		cout << "Terminating program.\n";
		exit(EXIT_FAILURE);
	}

	// get number of contributors
	int ncont;
	(infile >> ncont).get(); // get newline
	SocMem * mems = new SocMem[ncont]; // create dynamic array
	for (int i = 0; i < ncont; i++)
	{
		infile.getline(mems[i].name, MAXCHAR);
		(infile >> mems[i].contrib).get();
	}
	// cout.setf(ios_base::boolalpha);
	// cout << (infile.get() == '\n') << endl;
	cout << infile.get() << endl; // EOF

	if (infile.eof())
		cout << "End of file reached.\n";
	else if (infile.fail())
		cout << "Input terminated by data mismatch.\n";
	else
		cout << "Input terminated for unkown reasons.\n";

	infile.close(); // done reading file
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
