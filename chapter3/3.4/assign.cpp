#include <iostream>
using namespace std;

int main(){
	cout.setf(ios_base::fixed, ios_base::floatfield);
	float tree =3 ;
	int guess(3.9832);
	int debt = 7.2E12;
	cout << "tree = " << tree << endl; // 3.0
	cout << "guess = " << guess <<endl;
	cout << "debt = " << debt << endl;

	
	const int code = 66 ;
	int x = 66;
	char c1{31325}; // not allowed
	cout << c1 <<endl;
	char c2 = {66};
	cout << c2 <<endl;
	char c3 {code};
	char c4 = {x}; // not allowed
	x = 31325;
	char c5 = x;
	cout << c1<<c2<<c3<<c4<<c5;
	
	return 0;
}
