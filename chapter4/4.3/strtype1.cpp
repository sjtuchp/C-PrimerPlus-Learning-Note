#include <iostream>
#include <string>
using namespace std;

int main(){
	
	char charr1[20];
//	char charr2[20] = "jaguar";
	char charr2[20]{"jaguar"};
	string str1;
//	string str2 = "panther";
	string str2{"panther"};
	cout << "Enter a kind of feline: ";
	cin >> charr1;
	cout << "Enter another kind of feline: ";
	cin >> str1;
	cout << "Here are some felines:\n"
		 << str1 << " " << str2 << endl;
	cout << "The third letter in " << charr2 << " is "
		 <<charr2[2] << endl;
	cout << "The third letter in " << str2 << " is "
		 << str2[2]<< endl;
	
	char charr3[20];
	char charr4[20] = "jaguar";
	string str3;
	string str4 = "panther";
//	charr1 = charr2; Invalid
	str3 = str4 ; //Valid; 
	return 0;
}
