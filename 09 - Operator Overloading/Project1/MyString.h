#pragma once
class MyString
{
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
	MyString& operator-(const MyString& rhs);

	void display() const;
	int get_length() const;
	const char* get_str() const;
};