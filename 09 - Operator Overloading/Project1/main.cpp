#include <iostream>
#include "MyString.h"

int main() {
	MyString string("Hey!!!");
	string.display();

	MyString str2;
	str2 = string;
	str2.display();

	str2 = string;
	str2 = "BITCH";

	MyString stradd;
	stradd = string + str2;
	stradd.display();

	MyString strlow;
	strlow = "stradd";
	strlow = strlow;
	strlow - stradd;
	strlow.display();




	return 0;
}