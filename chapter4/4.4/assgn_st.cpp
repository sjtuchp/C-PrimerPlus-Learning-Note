#include <iostream>
using namespace std;

struct inflatable{
	char name[20];
	float volume;
	double price;
};
int main(){
	inflatable bouquet = {"sunflowwers", 0.2, 12.49};
	inflatable choice;
	cout << "bouquet: " << bouquet.name << " for $" ;
	cout << bouquet.price << endl;
	
	choice = bouquet;
	cout << "choice: "<< choice.name << " for $";
	cout << choice.price << endl;
	
	struct perks
	{
		int key_number;
		char car[12];
	} mr_smith, ms_jones; // create while declaration
	
	struct perks2{
		int key_number;
		char car[12];
	} mr_glitz =
	{
		7,
		"Packard"
	};					// initialization while creating and declaration
	
	struct {
		int x;
		int y;
	} position;  // struct with no name is also valid.
	return 0;
}
