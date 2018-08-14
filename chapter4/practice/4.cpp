#include <iostream>
#include <string>
using namespace std;

int main(){
	string firstname, lastname;
	cout << "Enter your first name: ";
	getline(cin, firstname);
	cout << "Enter your last name: ";
	getline(cin, lastname);
	
	string fullname;
	fullname = lastname + ", " + firstname;
	cout <<"Here's the information in a single string: " <<fullname <<endl; 
	return 0;
}
