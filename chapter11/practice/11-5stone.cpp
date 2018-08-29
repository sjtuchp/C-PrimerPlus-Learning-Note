#include <iostream>
using std::cout;
#include "11-5stonewt.h"

int main(){
	Stonewt test1(27, 34.6, Stonewt::FLOAT);
	cout << test1;
	test1.setMode(Stonewt::STONE);
	cout << test1;
	test1.setMode(Stonewt::INT);
	cout << test1;
	Stonewt test2(38,5.1);
	Stonewt temp = test1 + test2;
	cout << temp;
	temp = test2 - test1;
	cout << temp;
	temp = test1 * 5;
	cout << temp;
	temp = 5 * test1;
	cout << temp;
	return 0;
}

