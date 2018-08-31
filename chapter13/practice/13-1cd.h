#ifndef CD_H_
#define CD_H_
#include <iostream>
class Cd{
private:
	char performers[50];
	char label[20];
	int selections;
	double playtime;
public:
	Cd(const char * s1, const char * s2, int n, double x);
	Cd();
	virtual void Report() const;
};

class Classic:public Cd{
private:
	char mainwork[50];
public:
	Classic();
	Classic(const char *, const char *, const char *, int, double);
	virtual void Report() const;
};
#endif
