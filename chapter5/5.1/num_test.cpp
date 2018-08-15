#include <iostream>
using namespace std;

int main(){
	cout << "Enter the starting countdown value: ";
	int limit;
	cin >> limit;
	int i;
	for (i = limit;i;i--) 
//  for(int i = limit ; i; i--) 
//  if i is declared in for , it will be cleared after the loop/
		cout << "i = " << i << "\n";
	cout << " Done now that i = " << i << "\n";
	return 0;
} 
