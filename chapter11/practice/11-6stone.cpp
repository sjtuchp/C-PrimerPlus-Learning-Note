#include <iostream>
using std::cout;
using std::cin;
#include "11-6stonewt.h"


int main(){
 	Stonewt st[6] = {10.0,11.0,12.0};
 	for (int i=3;i<6;i++){
 		double temp;
		cin >> temp;
 		st[i] = temp;
	 }
	Stonewt max = 11, min = 11;
	int count=0;
	for (int i=0;i<6;i++){
		if (st[i]>max) max = st[i];
		if (st[i]<min) min = st[i];
		if (st[i]<11) ++count;
	}
	max.show_stn();
	min.show_stn();
	cout << count << std::endl;
	return 0;
}

