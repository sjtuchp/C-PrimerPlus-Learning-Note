#include <iostream>
struct CandyBar{
	char * brand;
	double weight;
	int heat;
};
void set_value(CandyBar &, char * = "Millennium Munch", 
				double = 2.85, int =350 );
void display(const CandyBar &);
int main(){
	CandyBar candy;
	set_value(candy, "DOVE", 2.77 , 200);
	display(candy);
	
	CandyBar candy2;
	set_value(candy2);
	display(candy2);
	return 0;
}
void set_value(CandyBar & candy,  char brand[], double weight, int heat){
	candy.brand = brand;
	candy.weight = weight;
	candy.heat = heat;
}
void display(const CandyBar & candy){
	using std::cout;
	using std::endl;
	cout << candy.brand << endl
		 << candy.weight << endl
		 << candy.heat << endl;
}
