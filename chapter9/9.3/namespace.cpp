#include <iostream>
namespace mytest{
	char test = 'a';
}
char test= 'b';
//using mytest :: test; 
//Invalid

namespace {
	char test2 = 'b';
} 
// unnamed namespace is the same with static char test2;
int main(){
	char test ='c';
	using std::cout;
	using std::endl;
//	using mytest::test;
//	Invalid
	{
		char test = 'c'; // valid
		cout << test << endl;
	}
	
	using namespace mytest; // the local test will cover the mytest::test;
	cout << test << endl;
	
}

