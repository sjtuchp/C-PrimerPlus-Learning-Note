#include <iostream>
using namespace std;
void time_print(double, double);
int main(){
	double hour,minute;
	cout << "Enter the number of hours:";
	cin >> hour;
	cout << "Enter the number of minutes:";
	cin >> minute;
	time_print(hour, minute);
	return 0;
}
void time_print(double hour, double minute){
	cout << "Time: " << hour << ":"<<minute<<endl;
}
