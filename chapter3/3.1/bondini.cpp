#include <iostream>
using namespace std;

int main(){
	cout << "\aOperation \"HyperHype\" is now activated!\n";
	cout << "Enter your agent code:________\b\b\b\b\b\b\b\b";
	long code;
	cin >> code;
	cout << "\aYou entered " << code <<"...\n";
	cout << "\aCode verified! Proceed with Plan Z3!\n";
	
	wchar_t bob = L'P'; // wide character type. use 16 or more bits per character 
	wcout << L"Tall" << endl;
	
	bool start = -100; // start = 1 (true)
	bool stop = 0; // stop = 0(false)
	cout << start << endl;
	cout << stop << endl;

	return 0;
}
