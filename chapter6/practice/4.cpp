#include <iostream>
using namespace std;

const int strsize = 50;
const int menbersize = 5;
struct bop {
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference;
};
bop menber[menbersize] = {{"Wimp Macho", "Teacher", "WMT" , 0},
						      {"Raki Rhodes", "Junior Programmer", "RRJP" , 1},
						      {"Celia Laiter", "Professor", "MIPS", 2},
						      {"Hoppy Hipman", "Analyst Trainee", "HHAT" , 1},
						      {"Pat Hand", "Cleaner", "LOOPY", 2}
							 };
void show(int);
void empty_buffer();
int main(){
	
	cout << "Benevolent Order of Programmers Report\n"
			"a. display by name\tb. display by title\n"
			"c. display by bopname\td.display by preference\n"
			"q. quit\n"
			"Enter your choice: ";
	char choice;
	bool quit_bool = false;
	while (!quit_bool && cin.get(choice)){
		switch(choice){
			case 'a': show(0);break;
			case 'b': show(1);break;
			case 'c': show(2);break;
			case 'd': show(3);break;
			case 'q': quit_bool = true;break;
			default : cout << "Invalid character! Please enter again: ";break;
		}
		if (choice != '\n')
			empty_buffer();	
	}
	return 0;
}
void show(int index){
	for (int i = 0; i < menbersize;i++){
		char ch = index < 3 ? index : menber[i].preference;
		switch (ch){
			case 0 : cout << menber[i].fullname;break;
			case 1 : cout << menber[i].title;break;
			case 2 : cout << menber[i].bopname;break;
			default : break; 
		}	
		cout << endl;
	}	
	cout << "Next choice: ";
}
void empty_buffer(){
	while (cin.get() !='\n');
}
