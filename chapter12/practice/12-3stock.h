
#ifndef STOCK_H_
#define STOCK_H_
#include <iostream>
class Stock{
	private:
		char *company;
		long shares;
		double share_val;
		double total_val;
		void set_tot(){ total_val = shares *share_val;	}

	public:
		Stock();
		Stock(const char * co, long n = 0, double pr = 0.0);
		Stock(const Stock &);
		~Stock(); 
		void buy(long num, double price);
		void sell(long num, double price);
		void update(double price);
		void show() const;
		const Stock & topval(const Stock & s) const;
		Stock & operator=(Stock &);
		friend std::ostream & operator <<(std::ostream & os, const Stock & s);
}; 

#endif
