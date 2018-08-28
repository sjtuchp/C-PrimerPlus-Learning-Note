#include <iostream>
#include "bankaccount.h"
 
int main(){
	Bankaccount myaccount;
	myaccount.show();
	Bankaccount myaccount2("Lilei", "hanmeimei520", 100);
	myaccount2.show();
	myaccount2.save(1000);
	myaccount2.show();
	myaccount2.withdraw(10000);
	myaccount2.withdraw(200);
	myaccount2.show();
	
	return 0;
}
