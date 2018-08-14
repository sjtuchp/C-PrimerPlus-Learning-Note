#include <iostream>
#define ZERO 0
#include <climits>
using namespace std;
int main(){
	short sam = SHRT_MAX;
	unsigned short sue =sam;
	
	cout << "Sam has "<< sam <<" dollars and Sue has " << sue
	     << " dollars deposited." << endl
		 << " Add $1 to each account." << endl << "Now" ;
	sam+=1;
	sue+=1;
	cout << "Sam has " << sam << " dollars and Sue has " << sue
		 << "dollars deposited.\nPoor Sam!" << endl;
	
	sam= ZERO;
	sue =ZERO;
	
	cout << "Sam has "<< sam <<" dollars and Sue has " << sue
	     << " dollars deposited." << endl
		 << " Take $1 from each account." << endl << "Now" ;
		 
	sam-=1;
	sue-=1;
	cout << "Sam has " << sam << " dollars and Sue has " << sue
		 << "dollars deposited.\nLucky Sue!" << endl;
	
	return 0;
	
}
