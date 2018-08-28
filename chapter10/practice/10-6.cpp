#include "10-6move.h"

int main(){
	Move m1;
	Move m2(1,2);
	m1.showmove();
	m2.showmove();
	m1.add(m2).showmove();
	m1.showmove();
	m1.reset(3,4);
	m1.showmove();
	return 0;
}
