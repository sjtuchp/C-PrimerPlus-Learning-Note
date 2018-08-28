#ifndef BANKACCOUNT_H_
#define BANKACCOUNT_H_
using std::string;
class Bankaccount{
	string name;
	string account;
	double saving;
public:
	Bankaccount(const string & ="No Name", const string & = "No accout", double sa = 0 );
	void show() const;
	void save(double );
	void withdraw(double);
}; 

#endif
