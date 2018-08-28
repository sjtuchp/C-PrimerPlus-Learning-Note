#include "10-6move.h"
#include <iostream>
Move::Move(double a, double b){
	x = a;
	y = b;
}
void Move::showmove() const {
	std::cout << "current x is "<< x 
			  << ", current y is " << y
			  << ".\n";
}
Move Move::add(const Move & m) const{
	return Move(x + m.x, y + m.y);
}
void Move::reset(double a, double b){
	x = a;
	y = b;
} 
