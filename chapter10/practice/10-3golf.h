//golf.h for 10-3.cpp
#ifndef GOLF_H_
#define GOLF_H_

class Golf {
private:
	static const int Len = 40;
	char fullname[Len];
	int handicap;
public:
	Golf(const char *name = "None", int hc = 0);
	int setgolf();
	void sethandicap(int hc);
	void showgolf();
};
#endif


