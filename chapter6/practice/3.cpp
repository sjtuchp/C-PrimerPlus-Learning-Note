#include <iostream>
using namespace std;

const char *choice_name[4] = { "carnivore", "pianist", "tree", "game"};
void show(int);
void re_enter();
void empty_buffer();
int main(){

	
	cout << "Please enter one of the following choices:\n"
		 <<	"c) " << choice_name[0] 
		 << "\t\tp) "<< choice_name[1] << endl
		 <<	"t) " << choice_name[2]
		 << "\t\tg) " << choice_name[3] << endl;
	char choice;
	int index;
	while (cin.get(choice)){
		if (choice == 'c' || choice == 'p' || choice == 't' || choice == 'g')
			break;
		if(!(choice == '\n'))
			empty_buffer();
		re_enter();
	}
	
	switch(choice){
		case 'c': show(0); break;
		case 'p': show(1);break;	
		case 't' : show(2); break;
		case 'g' : show(3); break;
		default : break;
	}
	empty_buffer();
	return 0;
}
void show(int i){
	cout << "A maple is a " << choice_name[i] << ".\n"; 
}
void re_enter(){
	cout << "Please enter a c, p, t, or g: ";
}
void empty_buffer(){
	while (cin.get()!= '\n');
}
