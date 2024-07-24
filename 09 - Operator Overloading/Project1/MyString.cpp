// Uncomment the below 3 line of codes if you are getting following error: C4996, C26439, C4267

#pragma warning(disable : 26439)
#pragma warning(disable : 4996)
#pragma warning(disable : 4267)

#include "MyString.h"
#include <iostream>
#include <cstring>

// Null Constructor
MyString::MyString()
	:str{ nullptr } {
	std::cout << "\nNo Arg\n";
	str = new char[1];
	*str = '\0';
};

// Copy Constructor
MyString::MyString(const char* rhs)
	:str{nullptr} {
	std::cout << "\nCopy Constructor\n";
	str = new char[std::strlen(rhs) + 1];
	std::strcpy(str, rhs);
};

MyString::MyString(const char& rhs)
	:str{nullptr} {
	std::cout << "\nMove Constructor\n";
	str = new char[std::strlen(&rhs) + 1];
	std::strcpy(str, &rhs);
};

// Destructor
MyString::~MyString(){
	std::cout << "\nDestructor\n";
	delete[] str;
};

// Copy Assignment
MyString& MyString::operator=(const MyString& rhs) {
	std::cout << "\nCopy Assignment\n";
	if (this->str == rhs.str)
		return *this;

	delete[] this->str;
	this->str = new char[std::strlen(rhs.str) + 1];
	std::strcpy(this->str, rhs.str);

	return *this;
}

// Move Assignment	
MyString& MyString::operator=(MyString&& rhs){
	std::cout << "\nMove Assignment\n";
	if (this->str == rhs.str)
		return *this;

	delete[] this->str;
	this->str = rhs.str;

	rhs.str = nullptr;

	return *this;
}

// Addition Assignment
MyString& MyString::operator+(const MyString& rhs){
	std::cout << "\nAddition Assignment\n";
	size_t buff_size = std::strlen(this->str) + std::strlen(rhs.str) + 1;

	char* buff = new char[buff_size];
	std::strcpy(buff, this->str);
	std::strcat(buff, rhs.str);

	delete[] this->str;
	this->str = new char[buff_size];
	std::strcpy(this->str, buff);

	delete[] buff;

	return *this;
}

MyString& MyString::operator+=(const MyString& rhs){
	*this = *this + rhs;
	return *this;
}

// Subtraction Assignment
MyString& MyString::operator-(){
	size_t buff_size = std::strlen(this->str) + 1;
	char* buff = new char[buff_size];
	std::cout << "\nSubtraction Assignment\n";
	std::strcpy(buff, "");
	for (int i = 0; i < buff_size; i++) {
		buff[i] = std::tolower(this->str[i]);
	}

	delete[] this->str;
	this->str = new char[buff_size];
	std::strcpy(this->str, buff);

	delete[] buff;

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
	size_t this_str_size{ std::strlen(this->str) };
	size_t rhs_str_size{ std::strlen(rhs.str) };
	if (this_str_size < rhs_str_size)
		return true;
	else
		return false;
}

bool MyString::operator<=(const MyString& rhs){
	size_t this_str_size{ std::strlen(this->str) };
	size_t rhs_str_size{ std::strlen(rhs.str) };
	if (this_str_size <= rhs_str_size)
		return true;
	else
		return false;
}


bool MyString::operator>(const MyString& rhs){
	size_t this_str_size{ std::strlen(this->str) };
	size_t rhs_str_size{ std::strlen(rhs.str) };
	if (this_str_size > rhs_str_size)
		return true;
	else
		return false;

}

bool MyString::operator>=(const MyString& rhs){
	size_t this_str_size{ std::strlen(this->str) };
	size_t rhs_str_size{ std::strlen(rhs.str) };
	if (this_str_size >= rhs_str_size)
		return true;
	else
		return false;
}


MyString& MyString::operator*(int n){
	size_t buff_size{std::strlen(this->str) * n + 1};

	char* buff{ new char[buff_size] };
	std::strcpy(buff, "");
	for (size_t i = 0; i < n; i++){
		std::strcat(buff, this->str);
	}

	delete[] this->str;
	this->str = new char[buff_size];
	std::strcpy(this->str, buff);

	delete[] buff;

	return *this;
}

MyString& MyString::operator*=(int n){
	return *this * n;
}


// Display
void MyString::display() const	   {
	for (int i = 0; i < get_length(); i++){
		std::cout << str[i];
	}
	std::cout << "\nLen: " << get_length() << std::endl;
};

// Get Length
int MyString::get_length() const {
	return std::strlen(str);
};

// Get String
const char* MyString::get_str() const {
	return str;
};

std::ostream& operator<<(std::ostream& os, const MyString& rhs){
	os << rhs.str;
	return os;
}

std::istream& operator>>(std::istream& in, MyString& rhs){
	rhs.str = new char[1000];
	in >> rhs.str;
	return in;
}