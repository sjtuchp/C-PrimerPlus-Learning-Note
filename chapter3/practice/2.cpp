#include <iostream>
using namespace std;

int main(){
	const int ft2in_coe = 12;
	const double in2mt_coe = 0.0254;
	const double kg2pd_coe = 2.2;
	
	cout << "Enter your height: (e.g 5 feet and 6 inches):\n"
		 << "feet: _____ \b\b\b\b\b\b";
	
	int foot, inch;
	cin >> foot;
	cout << "inches: _____ \b\b\b\b\b\b";
	cin >> inch;
	
	double pound;
	cout << "Enter your weight in pounds: _____\b\b\b\b\b";
	cin >> pound;
	
	double meter_height = foot * ft2in_coe * in2mt_coe;
	double kg_weight = pound / kg2pd_coe;
	cout << kg_weight / (meter_height * meter_height) <<endl;
	return 0;
}
