#include "11-5stonewt.h"
#include <iostream>

using std::cout;

Stonewt::Stonewt(double lbs, Stonewt::Mode m){
	stone = int(lbs) / Lbs_per_stn;
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
	mode = m;
}

Stonewt::Stonewt(int stn, double lbs, Stonewt::Mode m){
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn +lbs;
	mode = m;
}
Stonewt::Stonewt(){
	stone = pounds = pds_left = 0;
	mode = STONE;
}
Stonewt::~Stonewt(){
}
Stonewt Stonewt::operator+(const Stonewt &st) const{
	return Stonewt(pounds + st.pounds);
}
Stonewt Stonewt::operator-(const Stonewt &st) const{
	return Stonewt(pounds - st.pounds);
}
Stonewt Stonewt::operator*(double n) const{
	return Stonewt(pounds * n);
}
std::ostream & operator<<(std::ostream & os, Stonewt & swt){
	if (swt.mode == Stonewt::STONE)
		cout << swt.stone << " stone, " << swt.pds_left << " pounds\n";
	else if (swt.mode == Stonewt::INT)
		cout << "around " << int(swt.pounds)<< " pounds\n";
	else if (swt.mode == Stonewt::FLOAT)
		cout << swt.pounds << " pounds\n";	
	return os;
}
