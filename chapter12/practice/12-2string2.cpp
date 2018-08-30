#include <cstring>
#include "12-2string2.h"
using std::cout;
using std::cin;
int String::num_strings = 0;
int String::HowMany(){
	return num_strings;
}
String::String(const char *s){
	len = std::strlen(s);
	str = new char[len+1];
	std::strcpy(str,s);
	num_strings++;
}
String::String(){
	len = 4;
	str = new char[1];
	str[0] = '\0';
	num_strings++;
}
String::String(const String & st){
	num_strings++;
	len = st.len;
	str = new char [len+1];
	std::strcpy(str,st.str); 
}
String::~String(){
	--num_strings;
	delete [] str;
}

void String::stringup(){
	strupr(str);
}
void String::stringlow(){
	strlwr(str);
}
int String::has(char c){
	int result = 0;
	for (int i=0;i<len;i++)
		if (str[i] == c)
			++result;
	return result;
}
String & String::operator=(const String &st){
	if (this == &st){
		return *this;
	}
	delete [] str;
	len = st.len;
	str = new char[len+1];
	std::strcpy(str,st.str);
	return *this;
}
String & String::operator=(const char *s){
	delete [] str;
	len = std::strlen(s);
	str = new char[len+1];
	std::strcpy(str, s);
	return *this;
}
char & String::operator[](int i){
	return str[i];
}
const char & String::operator[](int i) const{
	return str[i];
}
String operator+(const String & st1, const String & st2){
	char * temp = new char [st1.len+st2.len+1];
	std::strcpy(temp,st1.str);
	std::strcat(temp,st2.str);
	return String(temp);
}
bool operator<(const String &st1, const String &st2){
	return (std::strcmp(st1.str,st2.str)<0);
}
bool operator>(const String &st1, const String &st2){
	return (st2<st1);
}
bool operator==(const String &st1, const String &st2){
	return (std::strcmp(st1.str,st2.str)==0);
}
std::ostream & operator << (std::ostream & os, const String&st){
	os << st.str;
	return os;
}
std::istream & operator >> (std::istream & is, String&st){
	char temp[String::CINLIM];
	is.get(temp,String::CINLIM);
	if (is)
		st = temp;
	while (is && is.get() !='\n')
		continue;
	return is;
}
