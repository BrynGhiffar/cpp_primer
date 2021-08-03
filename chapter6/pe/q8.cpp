#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
const int MAXFILENAME = 30;
int main()
{
	ifstream infile;
	char filename[MAXFILENAME];
	cout << "Enter file name: ";
	cin.getline(filename, MAXFILENAME);
	infile.open(filename);
	if (!infile.is_open()){
		cout << "Could not open file " << filename << endl;
		cout << "Program terminating\n";
		exit(EXIT_FAILURE);
	}
	char ch;
	int char_count = 0;
	while (infile.get(ch)){
		cout << ch;
		char_count++;
	}
	if (infile.eof()){
		cout << "End of file has been reached.\n";
	} else if (infile.fail())
		cout << "Input terminated by data mistach.\n";
	else
		cout << "input terminated for unknown reasons.\n";
	if (!char_count)
		cout << "No characters processed\n";
	else {
		cout << "Characters read: " << char_count << endl;
	}
	infile.close();
	return EXIT_SUCCESS;
}
