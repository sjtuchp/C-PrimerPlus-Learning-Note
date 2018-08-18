#include <iostream>

int count = 0;
void print(const char *, int = 0);
int main(){
	print("one");
	print("two");
	print("three",10);
	print("four",0);
	print("five",111);
	return 0;
} 
void print (const char * str, int n){
	using namespace std;
	count++;
	if (0==n)
		cout << str << endl;
	else 
		for (int i = 0; i < count ; i++)
			cout<< str << endl; 
}
