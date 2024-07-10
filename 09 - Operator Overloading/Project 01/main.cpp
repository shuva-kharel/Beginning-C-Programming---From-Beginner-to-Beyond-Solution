#include <iostream>
#include "MyString.h"

int main() {
	MyString s1{"STRING"};
	s1.display();

	MyString s2 = s1;
	s2.display();

	s2 = "Hello";
	s2.display();

	MyString s3;
	s3 - s2;
	s3.display();

	MyString s4;
	s4 = s1 + s2;
	s4.display();

	return 0;
}