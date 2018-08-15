#include <iostream>
using namespace std;

int main(){
	cout << "Enter the first integer (the small one): ";
	int small, big , sum=0;
	cin >> small;
	cout << "Enter the second integer (the big one): ";
	cin >> big;
	for (int i=small;i<=big;i++)
		sum+=i;
	cout << "The sum of these is " << sum <<endl;
	return 0;
}
