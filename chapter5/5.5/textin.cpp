#include <iostream>

int main(){
	using namespace std;

	char ch;
	int count = 0;
	cout << "Enter characters; enter # to quit:\n";
	cin >> ch;
	while (ch !='#')
	{
		cout << ch;
		++count;
		cin >> ch; 
	} 
//	cin will ignore the space and '\'
	cout << endl << count << " characters read\n";
	return 0;
} 
