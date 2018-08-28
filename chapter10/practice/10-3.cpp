#include <iostream> 
#include "10-3golf.h"
int main(){
	Golf g ;
	while (g.setgolf())
		g.showgolf();
	std::cout<<"Bye!\n";
	return 0;
}
