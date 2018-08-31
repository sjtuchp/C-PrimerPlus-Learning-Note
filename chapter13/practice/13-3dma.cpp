#include "13-3dma.h"
#include <cstring>

abcDMA::abcDMA(const char * l){
	label = new char[std::strlen(l)+10];
	std::strcpy(label, l);
}
abcDMA::abcDMA(const abcDMA & rs){
	label = new char[std::strlen(rs.label)+10];
	std::strcpy(label, rs.label);
}
abcDMA::~abcDMA(){
	delete [] label;
}
abcDMA & abcDMA::operator=(const abcDMA & rs){
	if (this == & rs)
		return *this;
	delete [] label;
	label = new char[std::strlen(rs.label) + 1];
	std::strcpy(label, rs.label);
	return *this;
} 

//baseDMA
baseDMA::baseDMA(const char * l, int r):abcDMA(l){
	rating = r; 
}
baseDMA::baseDMA(const abcDMA & rs, int r):abcDMA(rs){
	rating = r;
}
baseDMA::~baseDMA(){
}

lacksDMA::lacksDMA(const char * c, const char * l):abcDMA(l){
	std::strncpy(color,c,39);
	color[39] = '\0';
}
lacksDMA::lacksDMA(const char * c, const abcDMA & rs) : abcDMA(rs){
	std::strncpy(color,c, COL_LEN-1);
	color[COL_LEN-1]='\0';
}

lacksDMA::~lacksDMA(){
}
// hasDMA
hasDMA::hasDMA(const char * s, const char * l): abcDMA(l){
	style = new char[std::strlen(s)+1];
	std::strcpy(style,s);
}
hasDMA::hasDMA(const char *s, const abcDMA & rs):abcDMA(rs){
	style = new char[std::strlen(s)+1];
	std::strcpy(style, s);
}
hasDMA::hasDMA(const hasDMA & hs):abcDMA(hs){
	style = new char[std::strlen(hs.style)+1];
	std::strcpy(style, hs.style);
}
hasDMA::~hasDMA(){
	delete [] style;
}
hasDMA & hasDMA::operator=(const hasDMA & hs){
	if (this == &hs)
		return *this;
	abcDMA::operator=(hs);
	delete [] style;
	style = new char[std::strlen(hs.style) +1 ];
	std::strcpy(style, hs.style);
	return *this;
}
