#include <iostream>
#include "10-5Stack.h"
Stack::Stack(){
	size=0;
	capacity=1;
	item = new Item [capacity];
	sum = 0;
}
int Stack::add(const Item &it){
	if (++size >capacity){
		Item * temp = item;
		item = new Item [capacity*=2];
		for (int i=0;i<size-1;i++)
			item[i] = temp [i];
		delete [] temp;
	}
	item[size-1] = it;
	return 1;
}
int Stack::del(){
	sum+=item[--size].payment;
	show();
}
void Stack::show(){
	std::cout << sum << std::endl;
}
Stack::~Stack(){
	delete [] item;
} 
