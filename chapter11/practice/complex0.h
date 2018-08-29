#ifndef COMPLEX0_H_
#define COMPLEX0_H_
#include<iostream>
class complex {
private:
	double x;
	double y;
public:
	complex(double  = 0, double  = 0);
	~complex(); 
	complex operator ~(){ return complex(x,-y);};
	complex operator +(const complex c)const{ return complex(x+c.x, y+c.y);};
	complex operator -(const complex c)const{ return complex(x-c.x, y-c.y);};
	complex operator *(const complex c)const{ return complex(x*c.x-y*c.y,x*c.y+y*c.x);};
	complex operator *(double n)const{ return complex(x*n, y*n);};
	friend complex operator *(double n, const complex c){ return c*n;}; 
	friend std::istream & operator>>(std::istream & is, complex &);
	friend std::ostream & operator<<(std::ostream & os, const complex &);
};
#endif
