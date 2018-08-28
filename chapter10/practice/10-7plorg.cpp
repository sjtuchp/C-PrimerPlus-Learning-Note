#include <iostream>
#include "10-7plorg.h"

Plorg::Plorg(const char na[], int c){
	int i=0;
	do{
		name[i] = na[i];
	}while (na[i++]!='\0');
	ci = c;
}
void Plorg::setName(const char na[]){
	int i=0;
	do{
		name[i] = na[i];
	}while (na[i++]!='\0');	
}
void Plorg::setCI(int c){
	ci = c;
}
void Plorg::show(){
	std::cout << name << ' ' << ci << std::endl;
}
