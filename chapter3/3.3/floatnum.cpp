#include <iostream>
using namespace std;

int main(){
	cout.setf(ios_base::fixed, ios_base::floatfield);
	float tub = 10.0/3.0;
	double mint = 10.0 /3.0;
	const float million =1.0e6;
	
	cout << "tub = " << tub
		 << ", a million tubs = " << million * tub
		 << ",\nand ten million tubs = "
		 << 10 * million * tub << endl
		 << "mint = " << mint << " and a million mints = "
		 << million * mint << endl;
	
	cout << sizeof(float)<<endl;
	cout << sizeof(double)<<endl;
	cout << sizeof (long double) << endl;
	
	//For 3.14 or 2.8E8 the default is double.
	// 3.14f 3.14F ->float
	// 3.14l 3.14L ->long double	 		 
	return 0;
}
