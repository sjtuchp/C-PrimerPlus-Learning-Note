#include <iostream>

int main(){
	using namespace std;
	
	double prices[5] = {4.99, 10.99, 6.87, 7.99, 8.49};
	for (double x : prices)
		cout << x << endl; // Here copy the elements of price to x
	for (double &x : prices){
		x = x * 0.8;  // Here &x point to the address of prices's element.
		cout << x << endl;
	}
	for (int i: {0, 1, 2, 3, 4}){
		cout << prices[i] << endl;
	}
	for (int x : {3, 5, 2, 8, 6})
		cout << x << " ";
	cout << '\n';
	return 0;
} 
