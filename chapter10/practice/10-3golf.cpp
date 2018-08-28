#include <iostream>
#include "10-3golf.h"

Golf::Golf(const char *name, int hc){
	int i = 0;
	handicap = hc;
	do{
		fullname[i] = name [i];
	}while(i<Len && name[i++]!='\0');
}

int Golf::setgolf(){
	using std::cin;
	using std::cout;
	using std::endl;
	char name[Len];
	int hc;
	cout << "Please enter the fullname:\n";
	cin.get(name, Len);
// not a blank string
	if (cin) {
//		clear the following character in the buffer
		while(cin.get()!='\n');
		cin >> hc;
		cin.get();
		*this = Golf(name, hc);
		return 1;
	}
	else 
		return 0;
}
void Golf::sethandicap(int hc){
	handicap = hc;
}
void Golf::showgolf(){
	using std::cout;
	cout << fullname << "'s handicap is " << handicap <<".\n";
}


