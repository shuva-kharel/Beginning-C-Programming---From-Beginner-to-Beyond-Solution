#pragma once
#include <iostream>

class MyString
{
	friend std::ostream& operator<<(std::ostream& os, const MyString& rhs);
	friend std::istream& operator>>(std::istream& in, MyString& rhs);

private:
	char* str;

public:
	MyString();
	MyString(const char* rhs);
	MyString(const char& rhs);
	~MyString();
	
	MyString& operator=(const MyString& rhs);
	MyString& operator=(MyString&& rhs);
	MyString& operator+(const MyString& rhs);
	MyString& operator+=(const MyString& rhs);
	MyString& operator-();
	bool operator==(const MyString& rhs);
	bool operator!=(const MyString& rhs);
	bool operator<(const MyString& rhs);
	bool operator<=(const MyString& rhs);
	bool operator>(const MyString& rhs);
	bool operator>=(const MyString& rhs);
	MyString& operator*(int n);
	MyString& operator*=(int n);

	void display() const;
	int get_length() const;
	const char* get_str() const;
};