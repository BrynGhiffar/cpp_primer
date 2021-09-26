#include <iostream>
using namespace std;
void showmenu(void);
int main()
{
	showmenu();
	char ch;
	while (true){
		cin.get(ch).get();
		switch(ch)
		{
			case 'c' : cout << "They are carnivores.\n";
								break;
			case 't' : cout << "A mapple is a tree.\n";
								 break;
			case 'p' : cout << "The pianist is great.\n";
								 break;
			case 'g' : cout << "Shall we play a game?\n";
								 break;
			default:
						cout << "Please enter a c, p, t, or g: ";
						continue;
		}
		break;
	}
}
void showmenu(void){
	cout << 
	"Please enter one of the following choices:\n"
	"c) carnivore           p) pianist\n"
	"t) tree                g) game\n";
}
