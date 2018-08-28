#include<iostream>
#include "10-2Person.h"
Person::Person(const std::string &ln, const char * fn){
	lname = ln;
	int i = 0;
	do{
		fname[i] = fn[i];	
	}while (fn[i++]!='\0');		
}
void Person::Show() const{
	using std::cout;
	cout << "The last name is " << lname << std::endl;
	cout << "The first name is " << fname << std::endl;
}
void Person::FormalShow() const{
	using std::cout;
	cout << "The name is " << fname << " " << lname << std::endl;
}
