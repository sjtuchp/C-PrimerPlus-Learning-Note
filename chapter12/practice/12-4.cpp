#include <iostream>
#include "12-4stack.h"
int main(){
	Stack stA;
	Stack stB(5);
	Stack stC(stB);
	stC = stA;
	stC.push(5);
	stC.push(6);
	stC.push(7);
	
	Item temp;
	stC.pop(temp);
	stC.pop(temp); 
	stC.pop(temp);
	stC.pop(temp); 
	return 0;
}
