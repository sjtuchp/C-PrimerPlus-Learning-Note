#include <iostream>
using namespace std;

int main(){
	union one4all{
		int int_val;
		long long_val;
		double double_val;
	};
	one4all pail;
	pail.int_val = 15;
	cout << pail.int_val << endl;;
	pail.double_val = 1.38;
	cout << pail.double_val << endl; // int_val is lost.
	cout << pail.int_val << endl;
	return 0;
}
