#include "10-5Stack.h"
#include <iostream>

int main(){
	Stack hotel;
	customer cA = {"LiLei", 100};
	customer cB = {"Lily", 200};
	customer cC = {"Han", 300}; 
	hotel.show();
	hotel.add(cA);
	hotel.show();
	hotel.add(cB);
	hotel.show();
	hotel.del();
	hotel.del();
	return 0;
}
