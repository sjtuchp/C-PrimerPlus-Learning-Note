#include <iostream>
#include "golf.h"


void setgolf(golf &g,const char *name, int hc){
	g.handicap = hc;
	int i=0;
	for (i= 0; i<Len-1 && name[i];i++)
		g.fullname[i] = name[i];
	g.fullname[i] = '\0';
//	or use strcmp()
}
int setgolf(golf &g){
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
		setgolf(g, name, hc);
		return 1;
	}
	else 
		return 0;
}
void handicap(golf &g, int hc){
	g.handicap = hc;
}
void showgolf(const golf & g){
	using std::cout;
	cout << g.fullname << "'s handicap is " << g.handicap <<".\n";
}


