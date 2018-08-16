#include <iostream>
#include <string>
#include <fstream>
using namespace std;
struct donator {
	string name;
	double donation;
};

int main(){
	ifstream inFile;
	inFile.open("test9.txt");
	cout << "Enter the number of donators: ";
	int num_of_donators;
	inFile >> num_of_donators;
	inFile.get();
	donator *menber = new donator [num_of_donators];
	for (int i=0; i<num_of_donators; ++i){
		getline(inFile, menber[i].name);
		inFile >> menber[i].donation;
		inFile.get();
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
	inFile.close();
	return 0;
}
