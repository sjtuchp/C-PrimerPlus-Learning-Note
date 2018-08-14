#include <iostream>
using namespace std;

int main(){
	const double km2mile_coe = 0.6214;
	const double g2l_coe = 3.875;
	double lpkm;
	cout << "Enter the fuel consumption (in liter per 100 km) : ";
	cin >> lpkm;
	cout << "The fuel consumption is " << 1/(lpkm / g2l_coe / (km2mile_coe *100) )<< " miles per gallon.\n";
	return 0;
}
