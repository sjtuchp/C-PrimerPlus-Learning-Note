#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream> 
class Stonewt{
public:
	enum Mode{STONE, INT, FLOAT};	
private:
	enum{ Lbs_per_stn = 14};
	int stone;
	double pds_left;
	double pounds;
	Mode mode;
public:
	Stonewt(double lbs, Mode mode = STONE);
	Stonewt(int stn, double lbs, Mode mode =STONE);
	Stonewt();
	~Stonewt();
	void setMode(Mode m){ mode = m;};
	Stonewt operator+(const Stonewt &) const;
	Stonewt operator-(const Stonewt &) const;
	Stonewt operator*(double) const;
	friend Stonewt operator*(double n, const Stonewt & st){ return st*n;};
	friend std::ostream & operator<<(std::ostream & os, Stonewt & swt);
}; 

#endif
