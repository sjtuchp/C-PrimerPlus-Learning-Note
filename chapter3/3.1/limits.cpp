#include <iostream>
#include <climits>
using namespace std;

int main(){
	int n_int = INT_MAX; //INT_MAX is defined in <climits> file.
	short n_short = SHRT_MAX; //Notice that it is "SHRT..." not "SHORT..." 
	long n_long =LONG_MAX;
	long long n_llong = LONG_LONG_MAX; //LLONG_MAX is also ok.
	
	cout << "int is "<< sizeof(int)<<" byte." << endl; // sizeof(int) here bracket is required. 
	cout << "short is "<< sizeof n_short << " bytes."<< endl; // here bracket is optional.
	cout << "long is " << sizeof n_long << " bytes." << endl;
	cout << "long long is " << sizeof n_llong << " bytes." << endl;	
	cout << endl;
	cout << "Maximum values: \n";
	cout << "int: " << n_int << endl;
	cout << "short: " << n_short << endl;
	cout << "long: " << n_long << endl;
	cout << "long long: " << n_llong << endl;
	cout << "Minimum int value = " << INT_MIN << endl;
	cout << "Bits per byte = " << CHAR_BIT << endl;
	
	//Initialization 
	int a=1;
	int b=a;
	int c= a+b;
	int d(5);
	int e ={10};
	int f{15};
	int g{}; // set g to 0
	cout << a <<" "<< b <<" "<< c<<" "<< d <<" "<< e <<" "<<f <<" " << g<< endl;
}
