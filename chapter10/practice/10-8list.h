#ifndef LIST_H_
#define LIST_H_

typedef double Item;
class List{
private:
	static const int LEN = 3;
	Item data[LEN];
	int size;
public :
	List();
	~List();
	void add(const Item &);
	bool isEmpty();
	bool isFull();
	void visit(void (*) (Item &));
};
#endif
