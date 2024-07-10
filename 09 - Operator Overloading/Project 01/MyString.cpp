#pragma warning(disable : 4996)
#include "MyString.h"
#include <iostream>

// Constructor
MyString::MyString()
	:str{nullptr} {
	this->str = new char[1];
	*str = '\0';
}

MyString::MyString(const char* rhs) 
	:str{nullptr} {
	if (rhs == nullptr){
		str = new char[1];
		*str = '\0';
	}
	else{
		this->str = new char[std::strlen(rhs) + 1];
		strcpy_s(this->str, std::strlen(rhs) + 1, rhs);
	}
}

MyString::MyString(const MyString& rhs)
	:str{ nullptr } {
	this->str = new char[std::strlen(rhs.str) + 1];
	strcpy_s(this->str, std::strlen(rhs.str) + 1, rhs.str);
}

// Destructor
MyString::~MyString() {
	delete[] str;
}


// Operators
MyString& MyString::operator=(const MyString& rhs) {
	if (this == &rhs)
		return *this;

	delete[] this->str;
	this->str = new char[std::strlen(rhs.str) + 1];
	strcpy_s(this->str, std::strlen(rhs.str) + 1, rhs.str);
	return *this;
}


MyString& MyString::operator-(const MyString& rhs){
	if (this == &rhs)
		return *this;

	delete[] this->str;
	this->str = new char[std::strlen(rhs.str) + 1];
	for (size_t i = 0; i <= std::strlen(rhs.str); i++) {
		this->str[i] = std::tolower(rhs.str[i]);
	}
	return *this;
}


bool MyString::operator==(const MyString& rhs){
	if (this->str == rhs.str)
		return true;
	else
		return false;
}

bool MyString::operator!=(const MyString& rhs){
	if (this->str != rhs.str)
		return true;
	else
		return false;
}


bool MyString::operator<(const MyString& rhs){
	if (std::strlen(this->str) < std::strlen(rhs.str))
		return true;
	else
		return false;
}


bool MyString::operator>(const MyString& rhs){
	if (std::strlen(this->str) > std::strlen(rhs.str))
		return true;
	else
		return false;
}


MyString MyString::operator+(const MyString& rhs)const{
	char* temp = new char[std::strlen(this->str) + std::strlen(rhs.str) + 1];
	strcpy(temp, this->str);
	strcat(temp, rhs.str);
	MyString temp_str{ temp };
	return temp_str;
	delete[] temp;
}


/*
MyString& MyString::operator+=(const MyString& rhs){
	
}

MyString& MyString::operator*(const MyString& rhs){



}


MyString& MyString::operator*=(const MyString& rhs) {



}
*/

// Functions
void MyString::display() {
	std::cout << MyString::get_str() << " : " << MyString::get_length() << std::endl;
}

char* MyString::get_str() {
	return MyString::str;
}

size_t MyString::get_length() {
	return std::strlen(MyString::str);
}