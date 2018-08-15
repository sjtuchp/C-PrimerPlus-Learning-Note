#include <iostream>
using namespace std;

int main(){
	int n, s=0;
	do{
		cin >> n;
		s+=n;
	}while (n != 0);
	cout << s << endl;
	return 0;
} 
