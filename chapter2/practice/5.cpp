#include <iostream>
using namespace std;
double convert(double);
int main(){
	double cel_temp;
	cout << "Please enter a Celsius value :";
	cin >> cel_temp;
	cout << cel_temp << " degrees Celsius is " << convert(cel_temp) << " degrees Fahrenheit."<<endl;
	return 0;
}
double convert(double temp){
	return temp*1.8+32;
}
