// 12.12 bank.cpp -- using the Queue interface
// compile with queue.cpp
#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>  	// for time()
#include "queue.h"
const int MIN_PER_HR = 60;

bool newcustomer(double x); // is there a new customer?

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	using std::ios_base;

	// setting things up
	std::srand(std::time(0)); 	// random initializing of rand()
	cout << "Case Study: Bank of Heather Automatic Teller\n";
	cout << "Enter maximum size of first queue: ";
	int qs;
	cin >> qs;
	Queue line1(qs); 		// line queue holds up to qs people
	cout << "Enter maximum size of second queue: ";
	cin >> qs;
	Queue line2(qs);


	cout << "Enter the number of simulation hours: ";
	int hour; 			// hours of simulation
	cin >> hour;
	// simulation will run 1 cycle per minute
	long cyclelimit = MIN_PER_HR * hour; // # of cycles

	cout << "Enter the average number of customer per hour: ";
	double perhour; 	// average # of arrival per hour
	cin >> perhour;
	double min_per_cust; 		// average time between arrivals
	min_per_cust = MIN_PER_HR / perhour;

	Item temp; 								// new customer data
	long turnaways = 0; 			// turned away by full queue     	
	long customers1 = 0; 			// customers that joined the first queue
	long customers2 = 0; 			// customers that joined the second queue
	long served1 = 0; 				// served by the first atm during the simulation
	long served2 = 0; 				// served by the second atm during the simulation
	long sum_line1 = 0; 			// cumulative line length of the first queue
	long sum_line2 = 0; 			// cumulative line length of the second queue
	int wait_time1 = 0; 			// time until first autoteller is free 	
	int wait_time2 = 0; 			// time until second autoteller is free 	
	long line_wait1 = 0; 			// cumulative time in line for first atm
	long line_wait2 = 0; 			// cumulative time in line for second atm


	// running the simulation
	for (int cycle = 0; cycle < cyclelimit; cycle++)
	{
		if (newcustomer(min_per_cust)) // have newcomer
		{
			// will join the first queue if it has less customers
			// than the second queue. Otherwise it will join the
			// second queue
			if (line1.isfull() && line2.isfull())
				turnaways++;
			else if (line1.queuecount() < line2.queuecount())
			{
				customers1++;
				temp.set(cycle); 	// cycle = time of arrival
				line1.enqueue(temp); // add newcomer to line
			} else 
			{
				customers2++;
				temp.set(cycle);
				line2.enqueue(temp);
			}
		}
		if (wait_time1 <= 0 && !line1.isempty())
		{
			line1.dequeue(temp); 	// attend next customer
			wait_time1 = temp.ptime(); // for wait_time mintes
			line_wait1 += cycle - temp.when();
			served1++;
		}
		if (wait_time2 <= 0 && !line2.isempty())
		{
			line2.dequeue(temp);
			wait_time2 = temp.ptime();
			line_wait2 += cycle - temp.when();
			served2++;
		}
		if (wait_time1 > 0) wait_time1--;
		if (wait_time2 > 0) wait_time2--;
		sum_line1 += line1.queuecount();
	}

	// reporting results
	if (customers1 > 0)
	{
		cout << "--- first ATM ---\n";
		cout << "customers accepted: " << customers1 << endl;
		cout << "  customers served: " << served1 << endl;
		cout << "         turnaways: " << turnaways << endl;
		cout << "average queue size: ";
		cout.precision(2);
		cout.setf(ios_base::fixed, ios_base::floatfield);
		cout << (double) sum_line1 / cyclelimit << endl;
		cout << " average wait time: "
			<< (double) line_wait1 / served1 << " minutes\n";
	}
	else
		cout << "No customers in first atm!\n";

	if (customers2 > 0)
	{
		cout << "--- second ATM ---\n";
		cout << "customers accepted: " << customers2 << endl;
		cout << "  customers served: " << served2 << endl;
		cout << "         turnaways: " << turnaways << endl;
		cout << "average queue size: ";
		cout.precision(2);
		cout.setf(ios_base::fixed, ios_base::floatfield);
		cout << (double) sum_line2 / cyclelimit << endl;
		cout << " average wait time: "
			<< (double) line_wait2 / served2 << " minutes\n";
	}
	else
		cout << "No customers in second atm!\n";
	cout << "Done!\n";

	return 0;
}

// x = average time, in minutes, between customers
// return value is true if customer shows up this minute
bool newcustomer(double x)
{
	return (std::rand() * x / RAND_MAX < 1);
}

// answer:
// Using the following simulation values:
// 			first queue size: 10
// 			second queue size: 10
// 			simulation hours: 50000
// 			average number of customers per hour: 51
// the simulation gives an average wait time of 1 minute
