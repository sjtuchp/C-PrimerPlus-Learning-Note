#include <iostream>
#include <cstdlib>
#include <ctime>
#include "11-3vector.h"

int main(){
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	cout << "Enter target distance (q  to quit): ";
	while (cin>>target){
		cout << "Enter step length: ";
		if (!(cin >> dstep))
			break;
		cout << "Enter the n trials: ";
		int n, maxstep = 0, minstep = 2.1e9, sumstep = 0;
		if (!(cin >> n))
			break;
		for (int i = 0; i < n ; i++){
			steps = 0;
			result.reset(0.0, 0.0);
			while (result.magval() < target){
				direction = rand() % 360;
				step.reset(dstep,direction,Vector::POL);
				result = result + step;
				steps++;
			}
			sumstep += steps;
			maxstep = (maxstep>steps) ? maxstep : steps;
			minstep = (minstep<steps) ? minstep : steps;						
		}

		cout << "After " << n << " trails, the maxinum step is "
			 << maxstep << ", the mininum step is "
			 << minstep << " and the average step is "
			 << sumstep / n <<endl;
		cout << "Enter target distance (q to quit): "; 
	}
	cout << "Bye!\n";
	cin.clear();
	while (cin.get()!= '\n')
		continue;
	return 0;
}
