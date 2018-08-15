#include <iostream>
#include <string>
using namespace std;
struct car{
	string manufacturer;
	int year;
};
int main(){
	cout << "Enter the number of the cars: ";
	int num_of_car;
	cin >> num_of_car;
	cin.get();
	car *ptr = new car [num_of_car];
	for (int i= 0;i<num_of_car;++i){
		cout << "Car #" << i+1 << ":\n"
			 << "Please enter the make: ";
		getline(cin, (ptr+i)->manufacturer);
		cout << "Please enter the year made: ";
		(cin >> (ptr+i)->year).get();
	}
	cout << "Here is your collection:\n";
	for (int i= 0;i<num_of_car;++i){
		cout << (ptr+i)->year << " " << (ptr+i)->manufacturer <<endl;
	}
	return 0;
}
