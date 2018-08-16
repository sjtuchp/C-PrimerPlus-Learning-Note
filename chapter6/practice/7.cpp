#include <iostream>
#include <cctype>
#include <string>
int main(){
	using namespace std;
	
	cout << "Enter words (q to quit):\n";
	string word;
	int sum_vowel = 0, sum_consonant = 0, sum_other = 0;
	while (cin >> word && word != "q"){
		if (!isalpha(word[0])) sum_other++;
		else
			switch (word[0]){
				case 'a':
				case 'e':
				case 'o':
				case 'i':
				case 'u': ++sum_vowel;break;
				default : ++sum_consonant;break;
			}
	}
	cout << sum_vowel << " words beginning with vowels\n"
		 << sum_consonant << " words beginning with consonants\n"
		 << sum_other << " others\n";
	return 0;
}
