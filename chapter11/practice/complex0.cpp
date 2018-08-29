#include "complex0.h"

complex::complex(double m, double n){
	x = m;
	y = n;
}
complex::~complex(){
	
}
std::istream & operator>>(std::istream & is, complex & c){
	using std::cout;
	using std::cin;
	cout << "real:";
	cin >> c.x;
	if (!cin) return is;
	cout << "imaginary:";
	cin >> c.y;
	return is;
}
std::ostream & operator<<(std::ostream & os, const complex & c){
	using std::cout;
	cout <<"(" << c.x << ", "<<c.y << "i)";	
}
