#include <iostream>
using namespace std;

int main(){
	enum spectrum{ red, orange, yellow};
	spectrum band;
	band = red;
//	band = 1;  Invalid
	int color = yellow; // enum yellow is promoted to int 2 
	cout << color << endl; // output 2
	int color2 = yellow +100;
	cout << color2 << endl;
	
	enum num{ zero, one = 0, two =21 , three=20, four} number;
	number = zero;
	cout << number << endl;
	number = four;
	cout << number << endl; 
	number = num(19); // is also valid even though 19 is not in the enum"num"
	cout << number << endl; 
	return 0;
}
