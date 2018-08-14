#include <iostream>
#include <array>
using namespace std;

int main(){
	array<int, 3> score;
	cout << "Enter the score for the first time: ";
	cin >> score[0];
	cout << "Enter the score for the second time: ";
	cin >> score[1];
	cout << "Enter the score for the third time: ";
	cin >> score[2];
	cout << "The average score is " << (score[0]+score[1]+score[2])/3.0 << endl;
	return 0;
}
