#include <iostream>


int main(){

	using namespace std;
	cout << "Enter number of seconds: "; 
	long long second; cin >> second;
	long long init_second = second;
	const int min_to_sec = 60;
	const int hr_to_min = 60;
	const int dy_to_hr = 24;
	long long days = second / (dy_to_hr * hr_to_min * min_to_sec);
	second = second % (dy_to_hr * hr_to_min * min_to_sec);
	long long hour = second / (hr_to_min * min_to_sec);
	second = second % (hr_to_min * min_to_sec);
	long long minute = second / min_to_sec;
	second = second % min_to_sec;
	cout << init_second << " seconds = " << days << " days, "
			<< hour << " hours, " << minute << " minutes, "
			<< second << " seconds" << endl;

}
