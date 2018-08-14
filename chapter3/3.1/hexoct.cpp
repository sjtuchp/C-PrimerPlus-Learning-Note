#include <iostream>
#include <climits>
using namespace std;

int main(){
	int chest = 42;
	int waist = 0x42;
	int inseam = 042;
	
	cout << chest << endl;
	cout << waist << endl;
	cout << inseam << endl; //All display in decimal.
	
	cout << hex; // change to hex
	cout << chest << endl;
	
	cout << oct << chest << endl; // change to oct.
	
	
	cout << dec;
	cout << sizeof(20000) <<endl;  // int
	cout << sizeof(20000L) <<endl; // long
	cout << sizeof(20000LL) <<endl;// longlong
	
	return 0;
} 
