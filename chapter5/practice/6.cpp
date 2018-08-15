#include <iostream>
using namespace std;

int main(){
	const char *month[12] = {"Jan.","Feb.","Mar.","Apr.","May",
							 "June", "July","Aug.","Sept.","Oct.",
							 "Nov.", "Dec."};
	int volumn[3][12] ={};
	int sum[3] = {};
	int total = 0;
	for (int year=0; year<3;++year){
		for (int i=0;i<12;i++){
			cout << "Enter the sales volume on " << month[i] << " in " << year+2016<< ": ";
			cin >> volumn[year][i];
			sum[year]+=volumn[year][i];
		}
		total+=sum[year];
	}
	
	for (int year = 0;year<3;++year) cout<< "\t" << 2016+year;
	cout << endl;
	for (int i=0;i<12;i++){
		cout << month[i] << " :";
		for (int year = 0;year<3;++year)
			cout << "\t" << volumn[year][i];
		cout << endl;	
	}
	cout << "sum :";
	for (int year = 0;year<3;++year)
		cout << "\t" << sum[year];
	cout<<endl;
	
	cout << "The sum of sales volume in this year is " << total <<endl;
	return 0;
} 
