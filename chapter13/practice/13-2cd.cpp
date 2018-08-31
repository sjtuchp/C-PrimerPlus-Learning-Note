#include "13-2cd.h"
#include <cstring>
Cd::Cd(const char * s1, const char * s2, int n, double x){
	using std::strcpy;
	performers = new char [std::strlen(s1)+1];
	strcpy(performers, s1);
	label = new char [std::strlen(s2)+1];
	strcpy(label, s2);
	selections = n;
	playtime = x;
}
Cd::Cd(){
	using std::strcpy;
	performers = new char [5];
	strcpy(performers, "None");
	label = new char [5];
	strcpy(label, "None");
	selections = 0;
	playtime = 0;
}
Cd::Cd(const Cd &c){
	using std::strcpy;
	performers = new char [std::strlen(c.performers)+1];
	strcpy(performers, c.performers);
	label = new char [std::strlen(c.label)+1];
	strcpy(label, c.label);
	selections = c.selections;
	playtime = c.playtime;	
}
Cd::~Cd(){
	delete [] performers;
	delete [] label;
}

Cd & Cd::operator=(const Cd &cl){
	using std::strcpy;
	delete [] performers; 
	delete [] label;
	performers = new char [std::strlen(cl.performers)+1];
	strcpy(performers, cl.performers);
	label = new char [std::strlen(cl.label)+1];
	strcpy(label, cl.label);
	selections = cl.selections;
	playtime = cl.playtime;		
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
	mainwork = new char [5];
	std::strcpy(mainwork, "None");
}
Classic::Classic(const char *m, const char *s1, const char *s2, int n, double x):Cd(s1,s2,n,x){
	mainwork = new char [std::strlen(m)+1];
	std::strcpy(mainwork, m);
}
Classic::Classic(const Classic & cl):Cd(cl){
	using std::strcpy;
	mainwork = new char [std::strlen(cl.mainwork)+1];
	strcpy(mainwork, cl.mainwork);
}
Classic & Classic::operator=(const Classic &cl){
	Cd::operator=(cl);
	delete [] mainwork;
	mainwork = new char [std::strlen(cl.mainwork)+1];
	strcpy(mainwork, cl.mainwork);
}
void Classic::Report() const{
	Cd::Report();
	std::cout << "Mainwork: " << mainwork <<std::endl;
}
