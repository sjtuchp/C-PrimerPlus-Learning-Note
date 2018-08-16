#include <iostream>
#include <string>
using namespace std;
struct donator {
	string name;
	double donation;
};

int main(){

	cout << "Enter the number of donators: ";
	int num_of_donators;
	cin >> num_of_donators;
	cin.get();
	donator *menber = new donator [num_of_donators];
	for (int i=0; i<num_of_donators; ++i){
		getline(cin, menber[i].name);
		cin >> menber[i].donation;
		cin.get();
	}
	cout << "Grand Patrons\n"
			"--------------------------------\n";
	int count = 0;
	for (int i = 0; i < num_of_donators; ++i){
		if (menber[i].donation > 10000){
			cout << menber[i].name << "\t" << menber[i].donation << endl;
			++count;
		}
		
	}
	if (0 == count)
			cout << "None.\n";
	cout << "Patrons\n"
			"--------------------------------\n";
	count = 0;
	for (int i = 0; i < num_of_donators; ++i){
		if (menber[i].donation <= 10000){
			cout << menber[i].name << "\t" << menber[i].donation << endl;
			++count;
		}
	}
	if (0 == count)
		cout << "None.\n";
	return 0;
}
