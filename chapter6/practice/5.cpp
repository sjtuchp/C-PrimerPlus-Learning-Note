#include <iostream>

int main(){
	using namespace std;
	double income, tax;
	while (cin >> income && income >=0){
		if (income > 35000) 
			tax = 10000 * 0.1 + 20000* 0.15 + (income - 35000) * 0.2;
		else if (income <=35000 && income > 15000) 
			tax = 10000 * 0.1 + (income -15000) * 0.15;
		else if (income <=15000 && income >5000)
			tax = (income - 5000) * 0.1;
		else 
			tax = 0;
		cout << tax << endl;
	}
}
