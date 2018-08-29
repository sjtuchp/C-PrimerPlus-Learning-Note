#include "vector.h"
#include <iostream>
int main(){
	using namespace VECTOR;
	Vector folly(3.0, 4.0);
	Vector foolery(20.0, 30.0, Vector::Mode(1));
//	Vector foolery(20.0, 30.0, POL); 
//  Invalid. Must use Vector:: POL
	std::cout << folly << foolery;
	return 0;
}
