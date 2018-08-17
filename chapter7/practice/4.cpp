#include <iostream>

long double probability (unsigned numbers, unsigned picks, unsigned special);
int main(){
	using namespace std;
	double total, choices, special;
	cout << "Enter the total number of choices on the game card,\n"
			"the number of picks allowed and the total special number:\n";
	while ( (cin >> total >> choices >> special) && choices <=total){
		cout << "You have on echange in ";
		cout << probability(total, choices, special);
		cout << " of winning.\n";
		cout << "Next two numbers (q to quit): ";
	}
	cout << "bye\n";
	return 0;
}

long double probability (unsigned numbers, unsigned picks, unsigned special){
	long double result = special;
	long double n;
	unsigned p;
	for (n = numbers, p = picks; p>0; n--,p--)
		result = result * n / p;
	return result ;
}
