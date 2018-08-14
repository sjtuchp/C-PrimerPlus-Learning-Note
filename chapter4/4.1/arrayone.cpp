#include <iostream>
using namespace std;

int main(){
//	int yams[3]; // subscript is from 0 to 2
//	yams[0]=7;
//	yams[1]=8;
//	yams[2]=6;
	int yams[3]{7 , 8 , 6};
	int yamcosts[3] = {20, 30, 5};
	cout <<"Total yams = ";
	cout << yams[0] + yams[1] + yams[2] << endl;
	cout << "The package with " << yams[1] << " yams costs ";
	cout << yamcosts[1] << " cents per yam.\n";
	int total = yams[0] * yamcosts[0] + yams[1] *yamcosts[1];
	total = total + yams[2] *yamcosts[2];
	cout << "The total yam expense is " << total <<" cents.\n";
	cout << "\n Size of yams array = " << sizeof yams;
	cout << " bytes.\n";
	cout << "Size of one element = " << sizeof yams[0];
	cout << " bytes.\n"; 
	
	int test1[] = {1,2,3}; // three elements
	int test2[5] = {1,2}; // test[0]=1, test[1]=2, test[2]=test[3]=test[4]=0;
	int test3[100]= {}; // all set to zero;
	return 0;
} 
