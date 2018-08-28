#include "10-8list.h"
#include <iostream>
List::List(){
	size = 0;
}
List::~List(){
}
void List::add(const Item & it){
	if (isFull()) 
		std::cout<<"Fail! The list is full.\n";
	else {
		data[size++] = it;
		std::cout<<"Success!\n"
			 	   "Now you have " << size << " items.\n";
	}
}
bool List::isEmpty(){
	return size > 0 ? 0:1;
}
bool List::isFull(){
	return size < LEN ? 0:1;	
}
void List::visit(void (*pt) (Item &)){
	if (isEmpty()){
		std::cout << "No data.\n";
		return;
	}
	for (int i = 0;i < size ; i++){
		std::cout <<"The original item" << i+1 << " is " << data[i] <<".\n";
		pt(data[i]);
		std::cout <<	"Now the item " << i+1 << " is " << data[i] << ".\n";	
	}

}
