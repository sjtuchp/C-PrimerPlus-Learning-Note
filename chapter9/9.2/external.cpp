#include <iostream>
using namespace std;

double warming = 0.3;
extern int cats = 20;//can also use extern before the initialization
void update(double dt);
void local();

int main(){
	cout << cats << endl;
	cout << "Global warming is " << warming << " degrees.\n";
	update(0.1);
	cout << "Global warming is " << warming << " degrees.\n";
	local();
	cout << "Global warming is " << warming << " degrees.\n";
	return 0;
}
