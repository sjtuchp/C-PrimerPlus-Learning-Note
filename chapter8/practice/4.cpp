#include <iostream>
using namespace std;
#include <cstring>

struct stringy{
	char *str;
	int ct;
};
void set (stringy &, const char *);
void show (const stringy &, int = 1);
void show (const char *, int = 1);
int main(){
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";
	
	set(beany, testing);
	show(beany);
	show(beany,2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");
	return 0;
}
void set(stringy & s, const char * str){
	s.ct = strlen(str);
	char *newstr = new char [s.ct];
	strcpy(newstr, str);
	s.str = newstr;
}
void show(const stringy & s, int n){
	for (int i = 0;i<n;i++){
		cout << s.str << endl;
	}
}
void show(const char * str, int n){
	for (int i = 0;i<n;i++){
		cout << str << endl;
	}	
}
