#include "10-8list.h"
#include <iostream>
void reverse(Item &it){
	it = -it;
}
int main(){
	List test;
	test.add(5);
	test.add(7);
	test.add(8);
	test.add(9);
	std::cout << test.isEmpty() << std::endl;
	std::cout << test.isFull() << std::endl;
	test.visit(reverse);
	return 0;
}
