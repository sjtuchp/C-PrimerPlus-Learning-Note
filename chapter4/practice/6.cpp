#include <iostream>
#include <string>
using namespace std;
struct CandyBar{
	string brand;
	double weight;
	int calorie;
};
int main(){
	CandyBar candy_group[3] =
	{ 
		{ "Mocha Munch", 2.3, 350 },
		{ "Candy2", 3.4 , 460 },
		{ "Candy3", 17.8 , 470}
	};
	cout << "This candy " << candy_group[0].brand 
		 << " has " << candy_group[0].calorie << " calories in "
		 << candy_group[0].weight << " grams sugar.\n";
	cout << "This candy " << candy_group[1].brand 
		 << " has " << candy_group[1].calorie << " calories in "
		 << candy_group[1].weight << " grams sugar.\n";
	cout << "This candy " << candy_group[2].brand 
		 << " has " << candy_group[2].calorie << " calories in "
		 << candy_group[2].weight << " grams sugar.\n";
	return 0;
}
