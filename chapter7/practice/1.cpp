#include <iostream>
double average(double,double);
int main(){
	using namespace std;
	double x,y;
	while (cin >> x  >> y ){
		if (x == 0 || y == 0) break;
		cout << average(x,y) << endl;
	}
}
double average(double x, double y){
	return 2.0*x*y/(x+y);
}
