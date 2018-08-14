#include <iostream>
using namespace std;

int main(){
	int donuts = 6;
	double cups = 4.5;
	
	cout << "donuts value = " << donuts;
	cout << " and donuts address = " << &donuts << endl;
	cout << "cups value = " << cups
		 << " and cups address = " << &cups << endl;
	cout << sizeof(float) << sizeof(double) << sizeof(long double); 
	return 0;
}
