#include <iostream>

int main(){
	using std::cout;
	using std::endl;
	int a = 20 ;
	int b = 20 ;
	cout << "a = " << a << "; b = " << b << "\n";
	cout << "a++ = " << a++ << "; ++b = " << ++b << "\n";
	cout << "a = " << a << "; b = " << b << "\n";
//	a = 2 * a++ *(3 - ++a); 
//	the result is not sure, don't use like this
// 	for class, prefix ++x is moe efficient than suffix x++
	
	int arr[5] = {0,2,4,6,8};
	int *p =arr;

	int test1 = *p++;
	int test2 = *p;
//	valid for pointer
	cout << test1<< " " << test2 << endl;
	cout << *++p << endl;
	cout << "Now *p is " << *p << endl;
	cout << ++*p << endl;
	cout << "Now *p is " << *p << endl;
	cout << *p++ << endl;
	cout << "Now *p is " << *p << endl;
	cout << (*p)++ << endl;
	cout << "Now *p is " << *p << endl;
// priority: suffix > prefix = *
// and combine from right to left for prefix and *
	return 0;
} 
