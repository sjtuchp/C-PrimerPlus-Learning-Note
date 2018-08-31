#include "13-4port.h"
#include <cstring>
Port::Port(const char *br, const char * st, int b){
	brand = new char [std::strlen(br)+1];
	std::strcpy(brand,br);
	std::strcpy(style,st);
	bottles = b;
}
Port::Port(const Port & p){
	brand = new char [std::strlen(p.brand)+1];
	std::strcpy(brand,p.brand);
	std::strcpy(style,p.style);
	bottles = p.bottles;	
}
Port & Port::operator = (const Port & p){
	if (this == & p)
		return *this;
	delete [] brand;
	brand = new char [std::strlen(p.brand)+1];
	std::strcpy(brand,p.brand);
	std::strcpy(style,p.style);
	bottles = p.bottles;		
}
Port & Port::operator += (int b){
	bottles+=b;	
}
Port & Port::operator -= (int b){
	bottles-=b;
}
void Port::Show() const{
	std::cout << "Brand: " << brand
			  << "\nKind: " << style
			  << "\nBottles: " << bottles << '\n';
}
ostream & operator << (ostream & os, const Port & p){
	os << p.brand << ", " << p.style << ", " << p.bottles;
	return os;
} 


//vintagePort

VintagePort::VintagePort(){
	nickname = new char[5];
	std::strcpy(nickname,"none");
}
VintagePort::VintagePort(const char * br, int b, const char * nn, int y)
			:Port(br,"vintage",b){
	nickname = new char[std::strlen(nn)+1];
	std::strcpy(nickname,nn);
	year = y;			
}
VintagePort::VintagePort(const VintagePort & vp):Port(vp){
	nickname = new char[std::strlen(vp.nickname)+1];
	std::strcpy(nickname,vp.nickname);
	year = vp.year;	
}
VintagePort & VintagePort::operator=(const VintagePort & vp){
	Port::operator=(vp);
	delete [] nickname;
	nickname = new char[std::strlen(vp.nickname)+1];
	std::strcpy(nickname,vp.nickname);
	year = vp.year;		
}
void VintagePort::Show() const{
	Port::Show();
	std::cout << "Nickname: " << nickname
		 << "\nYear: " << year << '\n';
}
ostream & operator << (ostream & os, const VintagePort & vp){
	std::cout << (const Port &)vp
		 	  << ", " << vp.nickname << ", " << vp.year;
}
