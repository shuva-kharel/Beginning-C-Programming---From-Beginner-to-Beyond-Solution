#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_
#include "Account.h"

class Checking_Account : public Account
{
	friend std::ostream& operator<< (std::ostream& outs, const Checking_Account& account);
private:

protected:

public:
	Checking_Account(std::string name, double balance);
	bool deposit(double amount);
	bool withdraw(double amount);
};

#endif // !_CHECKING_ACCOUNT_H_