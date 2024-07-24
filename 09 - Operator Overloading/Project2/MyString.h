#pragma once
#include <iostream>

class MyString
{
	friend std::ostream& operator<<(std::ostream& os, const MyString& rhs);
	friend std::istream& operator>>(std::istream& in, MyString& rhs);

	friend MyString& operator+(MyString& lhs, const MyString& rhs);
	friend MyString& operator+=(MyString& lhs, const MyString& rhs);
	friend MyString& operator-(MyString& lhs);
	friend bool operator==(MyString& lhs, const MyString& rhs);
	friend bool operator!=(MyString& lhs, const MyString& rhs);
	friend bool operator<(MyString& lhs, const MyString& rhs);
	friend bool operator<=(MyString& lhs, const MyString& rhs);
	friend bool operator>(MyString& lhs, const MyString& rhs);
	friend bool operator>=(MyString& lhs, const MyString& rhs);
	friend MyString& operator*(MyString& lhs, int n);
	friend MyString& operator*=(MyString& lhs, int n);

private:
	char* str;

public:
	MyString();
	MyString(const char* rhs);
	MyString(const char& rhs);
	~MyString();

	MyString& operator=(const MyString& rhs);
	MyString& operator=(MyString&& rhs);

	void display() const;
	int get_length() const;
	const char* get_str() const;
};