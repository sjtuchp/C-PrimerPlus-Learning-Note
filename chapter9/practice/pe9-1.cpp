#include <iostream> 
#include "golf.h"
int main(){
	golf g ;
	while (setgolf(g))
		showgolf(g);
	std::cout<<"Bye!\n";
	return 0;
}
