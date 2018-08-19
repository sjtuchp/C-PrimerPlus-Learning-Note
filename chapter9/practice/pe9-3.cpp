#include <iostream>
#include <cstring>
struct chaff{
	char dross[20];
	int slag;
}; 

void set_chaff(chaff &, const char *, int);
void display_chaff(const chaff &);

int main(){
	using std::cout;
	using std::endl;
	static char buffer[100];
	cout << "The address of buffer: " << (void *) buffer << endl;
	chaff *cf = new (buffer) chaff [2];
	cout << "The address of cf: " << cf << endl;
	set_chaff(cf[1], "testing1", 10);
	set_chaff(cf[0], "testing0",20);
	for (int i =0;i<2;i++)
		display_chaff(cf[i]);
	return 0;
}
void set_chaff(chaff & cf, const char * d, int sl){
	strcpy(cf.dross, d);
	cf.slag = sl;
}
void display_chaff(const chaff & cf){
	using std::cout;
	cout << "The dross is " << cf.dross << ", and the slag is "
		 << cf.slag << std::endl; 
}
