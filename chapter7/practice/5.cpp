#include <iostream>
long double factorial(int);
int main(){
	using namespace std;
	cout << "Enter the number: (enter a non-integer to quit)";
	int n;
	while (cin >> n){
		cout << "The factorial of " << n << " is " << factorial(n) << endl
			 << "Enter the number: (enter a non-integer to quit)";
	}
	return 0;
}
long double factorial(int n){
	if (0 == n) 
		return 1;
	else 
		return factorial(n-1)*n; 
}

