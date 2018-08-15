#include <iostream>
#include <string>
using namespace std;

int main(){
	string str={};
	int count = 0;
	
	cout << "Enter words (to stop, type the word done):\n";
	cin >> str;
	while (str!="done"){
		count+=1;
		cin >> str;
	}
	cout << "You entered a total of " << count << " words.\n";
	return 0;
}
