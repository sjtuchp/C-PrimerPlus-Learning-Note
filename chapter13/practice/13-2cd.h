#ifndef CD_H_
#define CD_H_
#include <iostream>
class Cd{
private:
	char *performers;
	char *label;
	int selections;
	double playtime;
public:
	Cd(const char * s1, const char * s2, int n, double x);
	Cd();
	Cd(const Cd &);
	~Cd();
	Cd & operator=(const Cd &d);
	virtual void Report() const;
};

class Classic:public Cd{
private:
	char *mainwork;
public:
	Classic();
	Classic(const char *, const char *, const char *, int, double);
	Classic(const Classic &);
	Classic & operator=(const Classic &cl);
	virtual void Report() const;
};
#endif
