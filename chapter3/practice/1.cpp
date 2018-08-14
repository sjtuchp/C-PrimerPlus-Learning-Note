#include <iostream>
using namespace std;

int main(){
	const int coeffient = 12;
	cout << "Please Enter Your Height (in inch): ______\b\b\b\b\b\b";
	int height;
	cin >> height;
	cout << "Your height is " << height << " inches, the same as "
		 << height/coeffient << " feet " << height%coeffient <<" inches.\n";
	return 0;
}
