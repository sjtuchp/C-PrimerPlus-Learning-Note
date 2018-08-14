#include <iostream>
#include <string>
using namespace std;
struct person{
	string firstname,lastname;
	char grade;
	int age;		
};
int main(){
	person you;
	cout << "What is your first name? ";
	getline(cin, you.firstname);
	cout <<"What is your last name? ";
	getline(cin, you.lastname);
	cout <<"What letter grade do you deserve? ";
	cin >> you.grade;
	you.grade = you.grade + 1;
	cout << "What is your age? ";
	cin >> you.age;
	cout << "Name: "<<you.lastname << " , " << you.firstname <<endl
		 << "Grade: " << you.grade << endl
		 << "Age: " << you.age << endl;
	return 0;
}
