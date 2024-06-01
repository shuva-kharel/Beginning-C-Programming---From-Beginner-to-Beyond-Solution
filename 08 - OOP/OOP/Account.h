#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <string>

class Account
{
private:
	std::string name{ "Account" };
	double balance{0};

public:
	void set_name(std::string set_name);
	std::string get_name();

	bool deposit(double amount);
	bool withdraw(double amount);

	// Overloading constructor
	Account(std::string name = "Account Id", double balance = 0);
};

#endif