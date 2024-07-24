#pragma warning(disable : 4996)
#pragma warning(disable : 26439)
#pragma warning(disable : 4267)

#include "MyString.h"
#include <iostream>

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

// Subtraction Assignment
MyString& MyString::operator-(const MyString& rhs){
	if (rhs.str == nullptr){
		this->str = new char[1] {'\0'};
		return *this;
	}
	else{
		size_t buff_size = std::strlen(rhs.str) + 1;
		char* buff = new char[buff_size];
		std::cout << "\nSubtraction Assignment\n";
		for (int i = 0; i < buff_size; i++) {
			buff[i] = std::tolower(rhs.str[i]);
		}

		this->str = new char[buff_size];
		std::strcpy(this->str, buff);

		delete[] buff;

		return *this;
	}
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