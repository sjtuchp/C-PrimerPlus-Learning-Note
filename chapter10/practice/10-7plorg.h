#ifndef PLORG_H_
#define PLORG_H_
class Plorg{
private:
	static const int LEN = 20; 
	char name[LEN];
	int ci;
public:
	Plorg(const char [] = "Plorga", int = 50);
	void setName(const char []);
	void setCI(int);	
	void show();
};
#endif
