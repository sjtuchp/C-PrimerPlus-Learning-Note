#include <iostream>
#include <cstdlib>
#include <ctime>
#include "12-5queue.h"
const int MIN_PER_HR = 60;

bool newcustomer(double x);
double simulate(int qs, long cyclelimit, double perhour);
int main(){
	using std::cin;
	using std::cout;
	using std::endl;
	using std::ios_base;
	std::srand(std::time(0));
	cout << "Case Study: Bank of Heather Automatic Teller\n";
	cout << "The maximum size of queue: ";
	int qs = 10;
	cout << qs << endl;
		
	cout << "The number of simulation hours: ";
	int hours = 100;
	cout <<  hours <<endl;
	long cyclelimit = MIN_PER_HR * hours;
	
	cout << "The average number of customers per hour: ";
	double perhour;
	double min_per_cust;
	cout << "Tesing from 100 to 1" <<endl;
// loop
	int i = 100;
	for (i = 100; i>0;i--){
		perhour = i;
		int result = simulate(qs, cyclelimit, perhour);	
		if (result < 1) break;	
	}
	cout << "The average number of customers per hour should be " << i <<endl;
	return 0;
}
bool newcustomer(double x){
	return (std::rand() * x / RAND_MAX < 1);
}
double simulate(int qs, long cyclelimit, double perhour){
	double min_per_cust = MIN_PER_HR / perhour;	
	using std::cin;
	using std::cout;
	using std::endl;
	using std::ios_base;
	Queue line(qs),line2(qs);
	
	Item temp;
	long turnaways = 0;
	long customers = 0;
	long served = 0;
	long sum_line = 0;
	int wait_time1 = 0, wait_time2 = 0;
	long line_wait = 0;
    double result = 0;	
	for (int cycle = 0;cycle < cyclelimit; cycle++){
		if (newcustomer(min_per_cust)){
			if (line.isfull() && line2.isfull())
				turnaways++;
			else {
				customers++;
				temp.set(cycle);
				if (line.queuecount() < line2.queuecount())
					line.enqueue(temp);
				else 
					line2.enqueue(temp);
			}
		}
		if (wait_time1 <=0 && !line.isempty()){
			line.dequeue(temp);
			wait_time1 = temp.ptime();
			line_wait += cycle -temp.when();
			served++;
		}
		if (wait_time2 <=0 && !line2.isempty()){
			line2.dequeue(temp);
			wait_time2 = temp.ptime();
			line_wait += cycle -temp.when();
			served++;
		}
		if (wait_time1 > 0)
			wait_time1--;
		if (wait_time2 > 0)
			wait_time2--;
		sum_line += line.queuecount();
		sum_line += line2.queuecount();
	}
	if (customers > 0){
		result = (double) line_wait / served;
		cout.precision(2);
		cout.setf(ios_base::fixed,ios_base::floatfield);
		cout << "#" << (int)perhour << " average wait time: "
			 << result << " minutes\n";
		
	}
	else
		cout << "No customers!\n";
	cout << "Done!\n";
	return result;	
}
