#include <iostream>
using namespace std;
struct box{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
void display(box);
void setting(box *);
int main(){
	box menber = {
		"My Company",
		20,
		40,
		60,
		0
	};
	setting(&menber);
	display(menber);
	
	return 0;
}
void display(box b){
	cout << "Maker: "<< b.maker << endl;
	cout << "Height: " << b.height << endl;
	cout << "Width: " << b.width << endl;
	cout << "Length: " << b.length << endl;
	cout << "Volume: " << b.volume << endl;
}
void setting (box *b){
	b->volume = b->height * b->length *b->width;
}

