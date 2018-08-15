#include <iostream>
using namespace std;

int main(){
	int x;
	cout << "The expression x = 100 has the value ";
	cout << (x=100)<< endl; 
//	The brackets are needed because the priority of << is higher than = .
	cout << "Now x =" << x <<endl;
	cout << "The expression x < 3 has the value "
		 << (x < 3) <<endl;
	cout << "The expression x > 3 has the value "
		 << (x > 3) <<endl;
	
	cout.setf(ios_base::boolalpha); 
//	make the type bool display in true and false
	cout << "The expression x < 3 has the value "
		 << (x < 3) <<endl;
	cout << "The expression x > 3 has the value "
		 << (x > 3) <<endl;
	cout << 0 << 1 << 2 << -1 << bool(-1) << endl;
	return 0;
} 
