#include <iostream>
#include <string>
int main(){
	using namespace std;
	cout << "Enter a word: ";
	string word;
	cin >> word;
	char temp;
	int i,j;
	for (j=0, i = word.size()-1; j<i; --i,++j){
		temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}
	cout << word << "\n Done\n";
	int x = 1;
	cout << ( x++ , x--) << endl;
	cout << x <<endl;
//	1st, calculate x++ (the value is x, after it x+=1)
//	2nd, calculate x-- (the value is x, after it x-=1)
//	3rd, the value of a,b is b
//	, also has the lowest priority.
	return 0;
} 
