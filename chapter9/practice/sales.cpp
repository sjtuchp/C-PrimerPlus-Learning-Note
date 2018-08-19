#include <iostream>
#include "sales.h"
namespace SALES{
	void setSales(Sales & s, const double ar[], int n){
		s.max = n > 0 ? ar[0] : 0;
		s.min = n > 0 ? ar[0] : 0;
		s.average = 0;
		for (int i =0 ; i < QUARTERS; ++i){
			if (i < n){
				s.sales[i] = ar[i];
				s.max = ar[i] > s.max ? ar[i] : s.max;
				s.min = ar[i] < s.min ? ar[i] : s.min;
				s.average = (s.average * i + ar[i]) /(i+1);
			}
			else 
				s.sales[i] = 0;
		}
		
	}
	void setSales(Sales & s){
		std::cout<< "Please enter four sales:\n";
		double ar[4]={};
		for (int i = 0;i<QUARTERS; ++i)
			std::cin >> ar[i];
		setSales(s, ar, 4);
	}
	void showSales(const Sales & s){
		using std::cout;
		using std::endl;
		
		for (int i = 0; i < QUARTERS; i++){
			if (0 == s.sales[i])break;
			cout << "Quarter " << i+1;
			cout << " sales: " << s.sales[i] <<endl;
		}
		cout << "---------------------------\n";
		cout << "max: " << s.max
			 << "\nmin: " << s.min
			 << "\naverage: " << s.average << endl;
		cout << "---------------------------\n";
	}
}
