#include <iostream>
#include "10-4Sales.h"
namespace SALES{
	Sales::Sales(const double ar[], int n){
		max = n > 0 ? ar[0] : 0;
		min = n > 0 ? ar[0] : 0;
		average = 0;
		for (int i =0 ; i < QUARTERS; ++i){
			if (i < n){
				sales[i] = ar[i];
				max = ar[i] > max ? ar[i] : max;
				min = ar[i] < min ? ar[i] : min;
				average = (average * i + ar[i]) /(i+1);
			}
			else 
				sales[i] = 0;
		}
		
	}
	void Sales::setSales(){
		std::cout<< "Please enter four sales:\n";
		double ar[4]={};
		for (int i = 0;i<QUARTERS; ++i)
			std::cin >> ar[i];
		*this = Sales(ar, 4);
	}
	void Sales::showSales(){
		using std::cout;
		using std::endl;
		
		for (int i = 0; i < QUARTERS; i++){
			if (0 == sales[i])break;
			cout << "Quarter " << i+1;
			cout << " sales: " << sales[i] <<endl;
		}
		cout << "---------------------------\n";
		cout << "max: " << max
			 << "\nmin: " << min
			 << "\naverage: " << average << endl;
		cout << "---------------------------\n";
	}
}
