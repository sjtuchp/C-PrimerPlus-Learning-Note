#include <iostream>

using namespace std;

int main(){
	int a, b ;
	cin >> a >> b;
	cout << a+b<< endl;
	cin.get(); // fisrt .get() accept the "Enter" following input "b";
	cin.get(); // second .get() wait for our next "Enter" so that pause the program.
	return 0;
} 
