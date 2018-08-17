#include <iostream>

const int Max = 5;

double * fill_array(double *, double *);
void show_array(const double *, const double *); // const protects the data.
void revalue (double r, double *, double *);

int main(){
	using namespace std;
	double *properties = new double [Max];
	
	double * end = fill_array(properties, properties+Max);
	show_array(properties, end);
	if (end - properties > 0){
		cout << "Enter revaluation factor: ";
		double factor;
		while (!(cin >> factor)){
			cin.clear();
			while (cin.get()!='\n')
				continue;
			cout << "Bad input; Please enter a number: ";
		}
		revalue(factor, properties, end);
		show_array(properties, end);
	} 
	return 0;
}
double * fill_array(double *begin, double *end){
	using namespace std;
	double temp;
	double *pt;
	for ( pt = begin; pt<end ;++pt){
		cout << "Enter value #" << (pt-begin+1) << ": ";
		cin >> temp;
		if (!cin){
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; input process terminated.\n";
			break;
		}
		else if (temp < 0) break;
		*pt = temp;
	}
	return pt;
} 
void show_array(const double *begin, const double *end){
	using namespace std;
	for (const double *pt = begin; pt<end;pt++){
		cout << "Property #" << (pt-begin+1) << ": $";
		cout << *pt << endl;
	}
}
void revalue(double r, double *begin, double *end){
	for (double *pt = begin; pt<end;pt++)
		*pt*=r;
}
