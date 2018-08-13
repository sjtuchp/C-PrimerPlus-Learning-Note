#include <iostream>
using namespace std;
void first_print(int);
void second_print(int);
int main(){
	first_print(2);
	second_print(2);
	return 0;
}
void first_print(int n){
	for (int i=0;i<n;i++) cout << "Three blind mice\n";
}
void second_print(int n){
	for (int i=0;i<n;i++) cout << "See how they run\n";
}
