#include <iostream>

using namespace std;

int main(){
	
	int carrots; // defining declaration(definition)
	
	carrots = 25;
	cout << "I have " ; 
	cout << carrots;
	cout <<" carrots." ;
	cout << endl;
	carrots = carrots - 1;
	cout << "Crunch, crunch. Now I have " <<carrots << " carrots." << endl;
	
	int steinway;
	int baldwin;
	int yamaha;
	yamaha = baldwin = steinway = 88 ; // also valid. 88->steinway steinway-> baldwin baldwin->yamaha. All equal to 88 finally.
	return 0;
}
