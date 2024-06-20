#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_

#include "Account.h"

class Trust_Account:public Account
{
	friend std::ostream& operator<< (std::ostream& outs, const Trust_Account& account);
private:
	int* withdraw_count{ new int{ 3 } };

protected:
	double* interest_rate;

public:
	Trust_Account(std::string name, double balance, double interest_rate);
	bool deposit(double amount);
	bool withdraw(double amount);
};

#endif // !_TRUST_ACCOUNT_H_