#include <iostream>
using namespace std;
const int strsize = 30;

struct bop {
	char fullname[strsize]; // real name
	char title[strsize]; 		// job title
	char bopname[strsize];	// secret BOP name
	int preference;					// 0 = fullname, 1 = title, 2 = bopname
};
void showmenu(void);
int main()
{
	const int NBOPMEMS = 4;
	bop boppers[NBOPMEMS] {
		{"Bryn Abyan Ghiffar", "Computer Scientist", "Master Bopper", 2},
			{"John van Lui", "Engineer", "Grand Bopper", 0},
			{"Lara vind Brakkas", "Senior programmer", "DieHard Bopper", 1},
			{"Budi Kurniawan", "Junior Data Scientist", "Hobbyist Bopper", 0}
	};
	char dm; // display method
	showmenu();
	cout << "Enter your choice: ";
	while ((cin >> dm) && (dm != 'q'))
	{
		for (int i = 0; i < NBOPMEMS; i++)
		{
			switch(dm)
			{
				case 'a' :
					cout << boppers[i].fullname << endl;
					break;
				case 'b' : 
					cout << boppers[i].title << endl;
					break;
				case 'c' :
					cout << boppers[i].bopname << endl;
					break;
				case 'd' : 
					switch(boppers[i].preference)
					{
						case 0 :
							cout << boppers[i].fullname << endl;
							break;
						case 1 : 
							cout << boppers[i].title << endl;
							break;
						case 2 :
							cout << boppers[i].bopname << endl;
							break;
					}
					break;
			}
		}
		cout << "Next choice: ";
	}
	cout << "Bye!\n";
}
void showmenu(void)
{
	cout << 
		"Benevolent Order of Programmers Report\n"
		"a. display by name     b. display by title\n"
		"c. display by bopname  d. display by preference\n"
		"q. quit\n";
}
