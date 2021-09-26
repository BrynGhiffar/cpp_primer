// 9.8 twofile2.cpp -- variables with internal and external linkage
#include <iostream>
extern int tom;			// tom defined elsewhere
static int dick;		// overrides external dick
int harry = 200;		// external variable definition
										// no conflict with twofile1 harry
void remote_access()
{
	using namespace std;
	cout << "remote_access() reports the following addresses:\n";
	cout << "&tom\t" << &tom << endl;
	cout << "&dick\t" << &dick << endl;
	cout << "&harry\t" << &harry << endl;
}
