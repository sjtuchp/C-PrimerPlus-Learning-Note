#include <iostream>
using namespace std;

int main(){
	const double dg2mnt_coe = 60.0;
	const double mnt2scd_coe = 60.0;
	int degree, minute, second;
	cout << "Enter a latitude in degree, minutes, and seconds:\n"
		 << "First, enter the degrees: ";
	cin >> degree;
	cout << "Next, enter the minutes of arc: ";
	cin >> minute;
	cout << "Finally, enter the second of arc: ";
	cin >> second;
	cout << degree << " degrees, "
		 << minute << " minutes, "
		 << second << " seconds = "
		 << (second/mnt2scd_coe + minute)/dg2mnt_coe + degree << " degrees\n" ;
	return 0;
}
