#include <iostream>
#include <string>
using namespace std;
struct CandyBar{
	string brand;
	double weight;
	int calorie;
};
int main(){
	CandyBar snack = {"Mocha Munch", 2.3, 350};
	cout << "This candy " << snack.brand 
		 << " has " << snack.calorie << " calories in "
		 << snack.weight << " grams sugar.\n";
	return 0;
}
