#include <iostream>

int main(){
	using namespace std;

	char ch;
	int count = 0;
	cout << "Enter characters; enter # to quit:\n";
//	cin.get(ch);
//	while (cin.fail() == false)
//	while (!cin.fail())
// 	while (cin)
	while (cin.get(ch))
	{
		cout << ch;
		cout.put(ch);
		++count;
//		cin.get(ch); 
	} 
//	cin.get() will get each character.
	cout << endl << count << " characters read\n";
	return 0;
} 
