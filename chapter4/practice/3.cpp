#include <iostream>
#include <cstring>
using namespace std;
const int STR_MAX = 100;
int main(){
	char firstname[STR_MAX], lastname[STR_MAX];
	cout << "Enter your first name: ";
	cin.getline(firstname, STR_MAX);
	cout << "Enter your last name: ";
	cin.getline( lastname, STR_MAX);
	char fullname[2*STR_MAX] = "";
	strcat(fullname, lastname);
	strcat(fullname, ", ");
	strcat(fullname, firstname);
	
	cout <<"Here's the information in a single string: " <<fullname <<endl; 
	return 0;
}
