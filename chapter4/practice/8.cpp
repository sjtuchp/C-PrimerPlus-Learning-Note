#include <iostream>
#include <cstring>
using namespace std;
struct pizza{
	char *company;
	double diameter;
	double weight;
};

int main(){
	pizza * pizza_a = new pizza;
	
	cout << "Enter the diameter: ";
	cin >> pizza_a->diameter;
	cin.get();
	cout << "Enter the company: ";
	char temp[100];
	cin.getline(temp, 100);
	pizza_a->company = new char [strlen(temp)+1];
	strcpy(pizza_a->company, temp);
		
	cout << "Enter the weight: ";
	cin >> pizza_a->weight;
	
	cout << "Company : " << pizza_a->company <<endl
		 << "Diameter: " << pizza_a->diameter <<endl
		 << "Weight: " << pizza_a->weight <<endl; 
	delete pizza_a->company;
	return 0;
}
