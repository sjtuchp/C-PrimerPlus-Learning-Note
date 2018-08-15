#include <iostream>
using namespace std;

int main(){
	double daphne_before = 100, cleo_before = 100;
	double daphne_now = daphne_before, cleo_now = cleo_before;
	int years = 0;
	const double rate1 =0.1, rate2 = 0.05;
	
	while (cleo_now <= daphne_now){
		daphne_now = daphne_now + rate1 * daphne_before;
		cleo_now = cleo_now * (1+rate2);
		++years;
	}
	cout << "After " << years << " years, Daphne has "
		 << daphne_now << " dollars, and Cleo has"
		 << cleo_now << " dollars.";
		 
	return 0;
} 
