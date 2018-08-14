#include <iostream>
using namespace std;
const int STR_MAX = 100;
struct person{
	char firstname[STR_MAX],lastname[STR_MAX];
	char grade;
	int age;		
};
int main(){
	person you;
	cout << "What is your first name? ";
	cin.getline(you.firstname, STR_MAX);
	cout <<"What is your last name? ";
	cin.getline(you.lastname, STR_MAX);
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
