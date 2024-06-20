#ifndef _SAVING_ACCOUNT_H_
#define _SAVING_ACCOUNT_H_
#include "Account.h"

class Saving_Account: public Account
{
	friend std::ostream& operator<< (std::ostream& outs, const Saving_Account& account);
private:

protected:
	double* interest_rate;

public:
	Saving_Account(std::string name, double balance, double interest_rate);
	bool deposit(double amount);
};

#endif // !_SAVING_ACCOUNT_H_