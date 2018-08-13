#include <iostream>
using namespace std;
void simon(int);  // function prototype
int convert(int);
int main(){
	simon(3);
	int  count ;
	cin >> count;
	simon (count);
	cout << convert(100) << endl;
	return 0;
}

void simon(int n){
	cout << "Simon syas touch your toes " << n << " times." << endl;
}
int convert(int n){
	int x = 14* n;
	return x;
	//  same with:   return 14*n;
}
