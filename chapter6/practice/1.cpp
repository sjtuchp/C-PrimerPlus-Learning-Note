#include <iostream>
#include <cctype>

int main(){
	using namespace std;
	char ch;
	while ((ch = cin.get()) != '@'){
		if (islower(ch)) ch = toupper(ch);
		else if (isupper(ch)) ch = tolower(ch);
		if (!isdigit(ch)) cout << ch;		
	}
	return 0;
} 
