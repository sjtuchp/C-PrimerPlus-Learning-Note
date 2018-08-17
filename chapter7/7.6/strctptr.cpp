#include <iostream>
#include <cmath>

struct polar{
	double distance;
	double angle;
}; 
struct rect{
	double x;
	double y;
};

void rect_to_polar(const rect *xypos, polar * dapos);
polar * rect_to_polar2(const rect *xypos);
void show_polar(const polar * dapos);

int main(){
	using namespace std;
	rect rplace;
	polar pplace;
	
	cout << "Enter the x and y values: ";
	while (cin >> rplace.x >> rplace.y){
		rect_to_polar(&rplace, &pplace);
		show_polar(&pplace);
		cout << "Next two numbers (q to quit): ";
	}
	cout << "Done.\n";
	return 0;
}

void rect_to_polar(const rect *xypos, polar *dapos){

	dapos->distance = sqrt(xypos->x * xypos->x + xypos->y*xypos->y);
	dapos->angle = atan2(xypos->y, xypos->x);

}

void show_polar(const polar *dapos){
	using namespace std;
	const double Rad_to_deg = 57.29577951;
	
	cout << "distance = " << dapos->distance;
	cout << ", angle = " << dapos->angle *Rad_to_deg;
	cout << " degrees\n";
}
polar * rect_to_polar2(const rect *xypos){
	polar *ptr = new polar;
	return ptr;
}
