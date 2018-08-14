#include <iostream>
using namespace std;

int main(){
	
	char ch = 'M';	
	int i = ch;
	cout << " EThe ASCII code for: " <<ch<<" is "<< i << endl;
	
	cout << " Add one to the character code:" << endl;
	ch = ch+1;
	i = ch;
	cout << " EThe ASCII code for: " <<ch<<" is "<< i << endl;
	
	cout << "Displaying character char ch using cout.put(ch): ";
	cout.put(ch);
	cout.put('!');
	cout.put(123); // display the corresponding character.
	//	cout.put("test") is invalid
	cout << endl << "Done\n";
	return 0;
}
