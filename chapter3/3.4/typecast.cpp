#include <iostream>
using namespace std;

int main(){
	int auks, bats, coots;
	auks = 19.99+11.99; // 391;
	bats = (int) 19.99 + (int)11.99; // 30;
	coots = int(19.99)+ int (11.99); //30
	cout << "auks = " << auks << ", bats = " << bats;
	cout <<", coots = " << coots << endl;
	
	char ch = 'Z';
	cout << "The code for " << ch << "is";
	cout << int(ch)<<endl; //90
	cout << " Yes, the code is ";
	cout << static_cast<int>(ch) << endl;
	
	auto x = 0.0; // x is double;
	auto y = 0 ; // y is int;
	
	cout.put(88);
	cout << '\130' << '\x58'<<endl;
	double x1 = 1000.6;
	double x2 = 2000.9;
	int x3 = x1 + x2;
	cout << x3 <<endl;
	return 0;
}
