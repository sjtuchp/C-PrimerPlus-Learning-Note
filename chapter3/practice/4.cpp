#include <iostream>
using namespace std;

int main(){
	const int d2h_coe = 24;
	const int h2m_coe = 60;
	const int m2s_coe = 60;
	
	long long day, hour, minute, second;
	cout << "Enter the number of seconds: ";
	cin >> second;
	cout << second << " seconds = ";
	
	minute = second / m2s_coe;
	second = second % m2s_coe;
	
	hour = minute / h2m_coe;
	minute = minute % h2m_coe;
	
	day = hour / d2h_coe;
	hour = hour % d2h_coe;
	
	cout << day <<" days, "<< hour << " hours, "<< minute<< " minutes, "<< second << " seconds.\n";
	return 0;
}
