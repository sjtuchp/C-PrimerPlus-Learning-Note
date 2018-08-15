#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char str[100]={};
	int count = 0;
	
	cout << "Enter words (to stop, type the word done):\n";
	cin >> str;
	while (strcmp(str,"done")){
		count+=1;
		cin >> str;
	}
	cout << "You entered a total of " << count << " words.\n";
	return 0;
}
