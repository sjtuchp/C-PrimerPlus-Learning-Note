#include <iostream>
using namespace std;

int main(){
	int higgens = 5;
	int *pt = &higgens; // pointer must be initialized to avoid the unknown danger.
	cout << "Value of higgens = " << higgens
		 << "; Address of higgens = " << &higgens <<endl;
	cout << "Value of *pt = " << *pt
		 << "; Value of pt = " << pt << endl;
	cout << sizeof(int *) << endl;
	
	int *pt2;
	pt2 = (int*)0xB8000000;
	return 0;
}
