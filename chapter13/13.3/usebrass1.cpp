#include <iostream>
#include "brass.h"

int main(){
	using std::cout;
	using std::endl;
	Brass Piggy("Porcelot Pigg", 381299, 4000.00);
	BrassPlus Hoggy("Horatio hogg", 382288, 3000);
	Piggy.ViewAcct();
	cout << endl;
	Hoggy.ViewAcct();
	cout << endl; 
	cout << "Depositing $1000 into the hogg Account:\n";
	Hoggy.Deposit(1000.00);
	cout << "New balance: $" << Hoggy.Balance()<<endl;
	cout << "Withdrawing $4200 from the pigg Account:\n";
	Piggy.Withdraw(4200.00);
	cout << "Pigg account balance: $" << Piggy.Balance() << endl;
	cout << "Withdrawing $4200 from the Hogg Account:\n";
	Hoggy.Withdraw(4200.00);
	Hoggy.ViewAcct();
	return 0;
}
