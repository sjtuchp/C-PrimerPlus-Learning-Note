#include <iostream>
#include "bankaccount.h"
Bankaccount::Bankaccount(const string & n, const string & a, double sa){
	name = n;
	account = a;
	saving = sa;
}
void Bankaccount::show() const {
	using std::cout;
	cout << "-------------------------\n";
	cout << "name: " << name;
	cout << "\naccount: " << account;
	cout << "\nsaving: " << saving << "\n";
}
void Bankaccount::save(double n){
	saving+=n;
	using std::cout;
	cout << "-------------------------\n";
	cout << "Now saving " << n << '\n';
	cout << "Account " << account << " has " << saving << " saving now.\n"; 
}
void Bankaccount::withdraw(double n){
	using std::cout;
	cout << "-------------------------\n";
	if (n>saving){
		cout << "Account " << account <<" don't have enough money! \n"; 
	}
	else {
		saving -= n;
		cout << "Success\n"
			 << "Now account " << account << " have " << saving << " saving.\n";
	}
}
