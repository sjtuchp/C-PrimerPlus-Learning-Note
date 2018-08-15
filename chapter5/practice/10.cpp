#include <iostream>
using namespace std;

int main(){
	cout << "Enter number of rows: ";
	int num;
	cin >> num;
	for (int i=1;i<=num;i++){
		for (int j=1;j<=num-i;j++) cout << ".";
		for (int j=num-i+1;j<=num;j++) cout << "*";
		cout << endl;
	}
	return 0;
}
