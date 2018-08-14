#include <iostream>
using namespace std;

int main(){
	int mileage, gasoline;
	cout << "Enter the mileage (in mile) : ";
	cin >> mileage;
	cout << " Enter the amout of used gasoline (in gallon): ";
	cin >> gasoline;
	cout << "The fuel consumption is " << double(mileage)/ gasoline << " miles per gallon.\n";
	return 0;
}
