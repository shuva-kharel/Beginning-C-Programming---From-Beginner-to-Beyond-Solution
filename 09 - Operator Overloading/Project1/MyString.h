#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class MyString
{
private:
	char* str;
public:
	// Constructor
	MyString();
	MyString(const char* rhs);
	MyString(const MyString& rhs);
	~MyString();

	// Operators
	MyString& operator=(const MyString& rhs);
	MyString& operator-(const MyString& rhs);
	bool operator==(const MyString& rhs);
	bool operator!=(const MyString& rhs);
	bool operator<(const MyString& rhs);
	bool operator>(const MyString& rhs);
	MyString operator+(const MyString& rhs);
	MyString& operator+=(const MyString& rhs);
	MyString& operator*(const MyString& rhs);
	MyString& operator*=(const MyString& rhs);

	// Functions
	void display();
	char* get_str();
	size_t get_length();

};

#endif // !_MYSTRING_H_