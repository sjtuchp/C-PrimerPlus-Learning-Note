#include <fstream>
#include <iostream>
using namespace std;
int main(){
	ifstream inFile;
	inFile.open("test.txt");
	char ch;
	int count = 0;
	while (!inFile.get(ch).eof()) ++count;
	cout << count << endl;
	inFile.close();
	return 0;
} 
