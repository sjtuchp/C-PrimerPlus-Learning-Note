#include "12-1cow.h"

int main(){
	Cow cowA; // default constructor;
	cowA.ShowCow();
	Cow cowB("Lilei","sleep", 50); // constructor;
	cowB.ShowCow();
	Cow cowC = cowB; // copy constructor;
	cowC.ShowCow();
	Cow cowD("Han","eat", 100);
	cowC = cowD; //assignment operator
	cowC.ShowCow(); 
} 
