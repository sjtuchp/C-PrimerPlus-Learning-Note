#include <iostream>
#include <string>
#include <cctype>
using namespace std;
void upper_str(string &);

int main(){
	string str;
	cout << "Enter a string (q to quit): ";
	while (getline(cin, str) && str!="q"){
		if (str == "") continue;
		upper_str(str);
		cout << str << endl;
		cout << "Next string (q to quit): ";
	}
	cout << "Bye.";
	return 0;
}
void upper_str(string &str){
	int count = 0;
	while (str[count]){
		str[count] = toupper(str[count]);
		++count;
	}
}
