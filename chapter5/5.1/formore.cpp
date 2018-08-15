#include <iostream>

const int ArSize = 16 ;
int main(){
	long long factorials[ArSize];
	factorials[1] = factorials[0] = 1LL;
//  use 1 instead of 1LL is ok, 
//	cuz 1(int) will be changed to 1(longlong) automatically.
	for (int i = 2; i<ArSize;i++)
		factorials[i] = i * factorials[i-1];
	for (int i = 0; i < ArSize; i++)
		std::cout << i << "! = " << factorials[i] << std::endl;
	return 0;
} 
