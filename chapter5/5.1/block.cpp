#include <iostream>

int main(){
	using namespace std;
	cout << "The Amazing Accounto will sum and average "
		 << "five numbers for you .\n"
		 << "Please enter five values: \n";
	double number;
	double sum = 0.0;
	for (int i = 1; i<=5; i++){
		cout << "Value " << i << " : ";
		cin >> number;
		sum += number;
	}
	cout << "Five exquisite choices indeed£¡ "
		 << "They sum to " << sum << endl
		 << "and average to " << sum/5 << ".\n"
		 << "The Amazing Accounto bids you adieu!\n"; 
	int x= 1;
	{
		int x=2;
//		x just exist between the {}, hide the extern x( extern x is unchanged)
	}
	cout << x << endl;
	return 0;
} 
