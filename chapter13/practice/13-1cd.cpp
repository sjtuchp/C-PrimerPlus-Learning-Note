#include "13-1cd.h"
#include <cstring>
Cd::Cd(const char * s1, const char * s2, int n, double x){
	using std::strcpy;
	strcpy(performers, s1);
	strcpy(label, s2);
	selections = n;
	playtime = x;
}
Cd::Cd(){
	using std::strcpy;
	strcpy(performers, "None");
	strcpy(label, "None");
	selections = 0;
	playtime = 0;
}
void Cd::Report() const{
	std::cout << "------------------------------\n";
	std::cout << "Performers: " <<performers 
			  << "\nLabel: " << label 
			  << "\nSelections: " << selections 
			  << "\nPlaytime:" << playtime <<std::endl;
}

//Classic
Classic::Classic(){
	std::strcpy(mainwork, "None");
}
Classic::Classic(const char *m, const char *s1, const char *s2, int n, double x):Cd(s1,s2,n,x){
	std::strcpy(mainwork, m);
}

void Classic::Report() const{
	Cd::Report();
	std::cout << "Mainwork: " << mainwork <<std::endl;
}
