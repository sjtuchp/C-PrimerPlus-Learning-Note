#include "13-4port.h"
#include <iostream>
int main(){
	Port a("ABC", "tawny", 100);
	Port b(a);
	Port c;
	c=a;
	a.Show();
	c-=2;
	std::cout << c<< std::endl;	
	std::cout << c.BottleCount() << std::endl;
	
	VintagePort d("ABC", 100, "Old Velvet", 10);
	VintagePort e(d);
	VintagePort f;
	f=d;
	d.Show();
	f-=2;
	std::cout << f<< std::endl;	
	std::cout << f.BottleCount() << std::endl;
		
	return 0;
}
