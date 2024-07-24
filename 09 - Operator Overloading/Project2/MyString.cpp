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
MyString& operator+(MyString& lhs, const MyString& rhs){
	std::cout << "\nAddition Assignment\n";
	size_t buff_size = std::strlen(lhs.str) + std::strlen(rhs.str) + 1;

	char* buff = new char[buff_size];
	std::strcpy(buff, lhs.str);
	std::strcat(buff, rhs.str);

	delete[] lhs.str;
	lhs.str = new char[buff_size];
	std::strcpy(lhs.str, buff);

	delete[] buff;

	return lhs;
}

MyString& operator+=(MyString& lhs, const MyString& rhs){
	lhs = lhs + rhs;
	return lhs;
}

// Subtraction Assignment
MyString& operator-(MyString& lhs){
	size_t buff_size = std::strlen(lhs.str) + 1;
	char* buff = new char[buff_size];
	std::cout << "\nSubtraction Assignment\n";
	std::strcpy(buff, "");
	for (int i = 0; i < buff_size; i++) {
		buff[i] = std::tolower(lhs.str[i]);
	}

	delete[] lhs.str;
	lhs.str = new char[buff_size];
	std::strcpy(lhs.str, buff);

	delete[] buff;

	return lhs;
}


bool operator==(MyString& lhs, const MyString& rhs){
	if (lhs.str == rhs.str)
		return true;
	else
		return false;
}


bool operator!=(MyString& lhs, const MyString& rhs){
	if (lhs.str != rhs.str)
		return true;
	else
		return false;
}


bool operator<(MyString& lhs, const MyString& rhs){
	size_t lhs_str_size{ std::strlen(lhs.str) };
	size_t rhs_str_size{ std::strlen(rhs.str) };
	if (lhs_str_size < rhs_str_size)
		return true;
	else
		return false;
}

bool operator<=(MyString& lhs, const MyString& rhs){
	size_t lhs_str_size{ std::strlen(lhs.str) };
	size_t rhs_str_size{ std::strlen(rhs.str) };
	if (lhs_str_size <= rhs_str_size)
		return true;
	else
		return false;
}


bool operator>(MyString& lhs, const MyString& rhs){
	size_t lhs_str_size{ std::strlen(lhs.str) };
	size_t rhs_str_size{ std::strlen(rhs.str) };
	if (lhs_str_size > rhs_str_size)
		return true;
	else
		return false;

}

bool operator>=(MyString& lhs, const MyString& rhs){
	size_t lhs_str_size{ std::strlen(lhs.str) };
	size_t rhs_str_size{ std::strlen(rhs.str) };
	if (lhs_str_size >= rhs_str_size)
		return true;
	else
		return false;
}


MyString& operator*(MyString& lhs, int n){
	size_t buff_size{std::strlen(lhs.str) * n + 1};

	char* buff{ new char[buff_size] };
	std::strcpy(buff, "");
	for (size_t i = 0; i < n; i++){
		std::strcat(buff, lhs.str);
	}

	delete[] lhs.str;
	lhs.str = new char[buff_size];
	std::strcpy(lhs.str, buff);

	delete[] buff;

	return lhs;
}

MyString& operator*=(MyString& lhs, int n){
	return lhs * n;
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