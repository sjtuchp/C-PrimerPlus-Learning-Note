#include <iostream>
using namespace std;

int main(){
	cout.setf(ios_base::fixed,ios_base::floatfield);
	cout << "Integer division: 9/5 = " << 9/5 << endl;
	// the result is int
	cout << "Floating-point division: 9.0/5.0 = "<< 9.0/5.0 <<endl;
	//the result is double
	cout << "Mixed division: 9.0/5 = " << 9.0/5<< endl;
	// the result is double
	cout << "double constants: 1e7/9.0 =" << 1e7/9.0 << endl;
	// the result is double
	cout << "float constants: 1e7f/9.0f = " << 1.e7f/9.0f << endl;
	// the result is float
	return 0;
}
