#include "12-4stack.h"
#include <iostream>
Stack::Stack(int n){
	if (n>MAX)
		n = MAX;
	top = 0;
	size = n;
	pitems = new Item [n];
}
Stack::Stack(const Stack &st){
	size = st.size;
	top = st.top;
	pitems = new Item[size];
	for (int i=0;i<top;i++)
		pitems[i] = st.pitems[i];	
}
Stack::~Stack(){
	delete [] pitems;
}

Stack & Stack::operator=(const Stack & st){
	if (this == & st)
		return *this;
	if (size <st.size){
		delete [] pitems;
		size = st.size;
		pitems = new Item[size];		
	}
	top = st.top;

	for (int i=0;i<top;i++)
		pitems[i] = st.pitems[i];
}
bool Stack::isempty() const{
	return top == 0;
}
bool Stack::isfull() const {
	return top == MAX;
}
bool Stack::push(const Item &item){
	if (!isfull()){
		if (top >= size){
			size = top+1;
			Item * temp = pitems;
			pitems = new Item [size];
			for (int i=0;i<top;i++)
				pitems[i] = temp[i];
		}
		pitems[top++] = item;			
		return true;
	}
	else
		return false;
}
bool Stack::pop(Item & item){
	if(!isempty()){
		item = pitems[--top];
		std::cout << "pop " << item << ", now "<< top << " items left.\n";
		return true;
	}
	else {
		std::cout << "no item.\n";
		return false;		
	}

}
