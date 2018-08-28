#include <iostream>
#include "10-2Person.h"

int main(){
	Person one;
	Person two("Smythecraft");
	Person three("abcde","efgh");
	one.Show();
	two.Show();
	three.FormalShow();
	return 0;
} 
