#ifndef STACK_H_
#define STACK_H_
struct customer{
	char fullname[35];
	double payment;
};

typedef customer Item;

class Stack{
private:
	Item *item;
	int size;
	int capacity;
	double sum;
public:
	Stack();
	~Stack();
	int add(const Item &);
	int del();
	void show();
};
#endif
