// This file takes note of the "Empty Lines and Other Problems"
// subsection of the chapter and are written by myeslf.
#include <iostream>

using namespace std;

void getline_example(){
	cout << "Enter more than five characters:\n";
	const int size = 6;
	char charray[size];
	char pcharray[size];
	cin.getline(charray, size);
	// `getline` replaces the newline character with a '\0'
	// and if the number of characters in the stream
	// exceed the size, it leaves the remaining characters
	// in the stream. However, unlike `get`
	// `getline` sets the failbit and prevents further
	// input from the stream. To accept further input
	// from the stream, we can do `cin.clear()`;
	cin.clear();
	cout << "Enter more more than five character:\n";
	cin.getline(pcharray, size);
	cout << "first five characters: " << charray << endl;
	cout << "second five characters: " << pcharray << endl;
}

void get_example(){
	cout << "Enter nothing: \n";
	const int size = 5;
	char charray[size];
	cin.get(charray, size); // `get` sets the failbit on encountering
													// a newline
	cin.clear(); // since get blocks input when it is feed an empty line
	cin.get(); // since get leaves the newline in the input queue
	char pcharray[size];
	cout << "Enter something: \n";
	cin.get(pcharray, size);
	cout << "When nothing is aksed: " << charray << endl;
	cout << "When something is asked: " << pcharray << endl;

}

int main(){
	get_example();
}
