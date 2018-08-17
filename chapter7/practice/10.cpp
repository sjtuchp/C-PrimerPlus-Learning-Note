#include <iostream>

typedef double(*fun_ptr)(double , double);

double calculate(double, double , fun_ptr);
double add(double,double);
double minus2(double,double);
double multi(double,double); 
int main(){
	using namespace std;
	fun_ptr p[3] = {add, minus2, multi};
	for (int i = 0;i<3;i++)
		cout << calculate(3,5,p[i]) << endl;
	return 0;
}
double calculate(double x, double y , fun_ptr p){
	return p(x,y);
}
double add(double x, double y){
	return x+y;
}
double minus2(double x, double y){
	return x-y;
}
double multi(double x, double y){
	return x*y;
}
