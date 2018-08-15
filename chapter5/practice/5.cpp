#include <iostream>
using namespace std;

int main(){
	const char *month[12] = {"Jan.","Feb.","Mar.","Apr.","May",
							 "June", "July","Aug.","Sept.","Oct.",
							 "Nov.", "Dec."};
	int volumn[12] ={};
	int sum = 0;
	for (int i=0;i<12;i++){
		cout << "Enter the sales volume in " << month[i] << ": ";
		cin >> volumn[i];
		sum+=volumn[i];
	}
	for (int i=0;i<12;i++)
		cout << month[i] << " :\t " << volumn[i]<<endl;		 
	cout << "The sum of sales volume in this year is " << sum <<endl;
	return 0;
} 
