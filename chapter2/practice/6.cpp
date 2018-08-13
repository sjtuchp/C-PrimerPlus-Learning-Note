#include <iostream>
using namespace std;
double convert(double);
int main(){
	double dist_in_ly;
	cout << "Enter the number of light years :";
	cin >> dist_in_ly;
	cout << dist_in_ly << " light years =  " << convert(dist_in_ly) << " astronomical units."<<endl;
	return 0;
}
double convert(double dist){
	return dist*63240;
}
