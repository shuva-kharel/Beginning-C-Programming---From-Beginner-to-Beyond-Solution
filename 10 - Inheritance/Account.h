#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <iostream>
#include <string>

class Account
{
	friend std::ostream& operator<< (std::ostream & outs, const Account & account);
private:

protected:
	std::string* name;
	double* balance;

public:
	Account(std::string name, double balance);
	bool deposit(double amount);
	bool withdraw(double amount);
	double get_balance();
};

#endif // !_ACCOUNT_H_