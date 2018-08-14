#include <iostream>
#include <cstring> // include strlen function
using namespace std;

int main(){
	char cat[8] = {'f','a','t','e','s','s','a','\0'};// String must end with '\0'
	cout << cat <<endl;
	
	char bird[11]= "Mr. Cheeps";
	char fish[] = "Bubbles";
	//"B" is diffirent with 'B' , the front is 'B' + '\0\;
	cout << bird << fish << endl;
	
	char message[] = "Tom""+""Jack"; // string connection
	cout << message << endl;
	
	const int Size = 15;
	char name1[Size];
	char name2[Size]= "C++owboy";
	
	cout << "Howdy! I'm " << name2;
	cout << "! What's your name?\n";
	cin >> name1;
	cout << "Well, " << name1 << ", your name has ";
	cout << strlen(name1) << " letter and is stored\n";
	cout << "in an array of " << sizeof(name1) <<" bytes.\n";
	cout <<"Your initial is " << name1[0] << ".\n";
	name2[3]='\0';
	cout << "Here are the first 3 characters of my name: ";
	cout << name2 << endl;
	return 0;
}
