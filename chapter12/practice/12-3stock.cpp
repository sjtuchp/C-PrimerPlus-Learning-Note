#include "12-3stock.h"
#include <cstring>
Stock::Stock(){
	std::cout << "Default constructor called\n";
	company = new char[8];
	strcpy(company,"no name");
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}
Stock::Stock(const Stock &s){
	int len = strlen(s.company);
	company = new char[len+1];
	strcpy(company,s.company);
	shares = s.shares;
	share_val = s.share_val;
	total_val = s.total_val;
}
Stock::Stock(const char * co, long n, double pr){
	int len = strlen(co);
	company = new char [len+1];
	strcpy(company, co);
	if (n<0){
		std::cout << "Number of shares can't be negative; "
			 	  << company << " shares set to 0.\n";
		shares = 0;
	}
	else 
		shares = n;
	share_val = pr;
	set_tot();
}

Stock::~Stock(){
	delete []company;
}

void Stock::buy(long num, double price){
	if (num < 0){
		std::cout << "Number of shares purchased can't be negative. "
				  << "Transaction is aborted.\n";
	}
	else {
		shares += num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(long num,double price){
	using std::cout;
	if (num < 0){
		cout << "Number of shares sold can't be negative. "
			 << "Transaction is aborted.\n";
	}
	else if (num > shares ){
		cout << "you can't sell more than you have! "
		 	 << "Transaction is aborted.\n";
	}
	else {
		shares -= num;
		share_val = price;
		set_tot();
	}
}

void Stock::update(double price){
	share_val = price;
	set_tot();
}

const Stock & Stock::topval(const Stock & s) const{
	if (s.total_val > total_val)
		return s;
	else 
		return *this;
}
std::ostream & operator <<(std::ostream & os, const Stock & s){
	using std::cout;
	using std::ios_base;
	ios_base::fmtflags orig = cout.setf(ios_base::fixed,ios_base::floatfield);
	std::streamsize prec = cout.precision(3); 
	cout << "Company: " << s.company
		 << " Shares: " << s.shares << '\n'
		 << " Share Price: $" << s.share_val;
	cout.precision(2);
	cout<< " Total Worth: $" << s.total_val << '\n';
	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);	
}

Stock & Stock::operator=(Stock & s){
	if (this == &s)
		return *this;
	delete [] company;
	company = new char [strlen(s.company)+1];
	strcpy(company,s.company);
	shares = s.shares;
	share_val = s.share_val;
	total_val = s.total_val;
	return *this;	
}
