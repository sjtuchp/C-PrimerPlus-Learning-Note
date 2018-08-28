#include <iostream>
#include "10-4Sales.h"

int main(){
	using SALES::Sales;
	double ar[] = {1,2,3,4,5};
	Sales s1;
	s1.setSales();
	Sales s2(ar,3);
	s1.showSales();
	s2.showSales();
	return 0;
}
