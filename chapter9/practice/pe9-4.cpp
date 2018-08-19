#include <iostream>
#include "sales.h"

int main(){
	using SALES::Sales;
	Sales s1,s2;
	double ar[] = {1,2,3,4,5};
	SALES::setSales(s1);
	SALES::setSales(s2, ar, 3);
	SALES::showSales(s1);
	SALES::showSales(s2);
	return 0;
}
