#include <iostream>
using namespace std;

int main(){
	cout << "What year was your house built?\n";
	int year;
	(cin >> year).get(); // to get the '\n'
	cout << "What is its street address?\n";
	char address[80];
	cin.getline(address,80);
//	cin >> address;  // end with a space \t \n
	cout << "Year built: " << year << endl;
	cout << "Address: " << address << endl;
	cout << "Done!\n";
	return 0;
}
