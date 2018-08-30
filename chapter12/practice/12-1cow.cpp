#include "12-1cow.h"
#include <cstring>
#include <iostream>
Cow::Cow(){
	name[0] = '\0';
	hobby = new char [1];
	hobby[0]= '\0'; 
	weight = 0;
} 
Cow::Cow(const char *nm, const char *ho, double wt){
	strcpy(name, nm);
	int len = strlen(ho);
	hobby = new char [len+1];
	strcpy(hobby,ho);
	weight = wt;
}
Cow::Cow(const Cow & c){
	strcpy(name, c.name);
	int len = strlen(c.hobby);
	hobby = new char [len+1];
	strcpy(hobby,c.hobby);
	weight = c.weight;	
}
Cow::~Cow(){
	delete [] hobby;
}
Cow & Cow::operator=(const Cow &c){
	strcpy(name, c.name);
	delete [] hobby;
	int len = strlen(c.hobby);
	hobby = new char [len+1];
	strcpy(hobby,c.hobby);
	weight = c.weight;	
}
void Cow::ShowCow() const{
	std::cout << "The cow " << name
		   	  << " likes " << hobby
		   	  << " and now is " << weight
		   	  << "kg.\n";
}
