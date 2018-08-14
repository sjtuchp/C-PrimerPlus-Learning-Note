#include <iostream>
using namespace std;

int main(){
	int updates = 6;
	int * p_updates;
	p_updates = &updates;
	
	cout << "Values: updates = " << updates;
	cout << " , *p_updates = " << *p_updates<<endl;
	
	cout << "Addresses: &updates = " << &updates;
	cout << ", p_updates = " << p_updates << endl;
	*p_updates = *p_updates + 1;
	cout << "Now updates = " << updates << endl;
	
	double *begin_str, end_str;// end_str is double type here.
	cout << begin_str <<" "<< end_str << endl;
	return 0;
}
