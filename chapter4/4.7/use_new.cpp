#include <iostream>
using namespace std;

int main(){
	int nights = 1001;
	int * pt = new int;
	*pt = 1001;
	
	cout << "nights value = ";
	cout << nights <<": location " << &nights <<endl;
	cout << "int ";
	cout << "value = " << *pt << ": location = " << pt <<endl;
	double *pd = new double;
	*pd = 10000001.0;
	
	cout << "double";
	cout << "value = " << *pd << ": location = " << pd << endl;
	cout << "location of pointer pd: " << &pd << endl;
	cout << "size of pt = " << sizeof(pt);
	cout << ":size of *pt = " << sizeof(*pt) << endl;
	cout << "size of pd = " << sizeof pd;
	cout << ": size of *pd = " << sizeof(*pd) << endl;
	
	int *ps = new(int);
	delete(ps);
//	delete ps; free the pointer again will make a uncertain result. Don't do it.

 	int jugs = 5;
 	int *pi = &jugs;
// 	delete pi;  Not allowed
	return 0;
}
