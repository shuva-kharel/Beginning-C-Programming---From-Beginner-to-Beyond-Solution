#include "Checking_Account.h"

std::ostream& operator<< (std::ostream& out, const Checking_Account& account) {
	return out << *account.name << " : " << *account.balance << "\n";
}

bool Checking_Account::deposit(double amount) {
	if (amount <= 0) {
		std::cout << "\nAmount should be greate than 0";
		return false;
	}
	else {
		*balance += amount;
		return true;
	}
}

bool Checking_Account::withdraw(double amount) {
	if (*balance < amount) {
		return false;
	}
	else if(*balance > 1.5) {
		std::cout << "\nChecking Fee - $1.50 Deducted";
		*balance -= (amount - 1.5);
		return true;
	}
	else{
		return false;
	}
}

Checking_Account::Checking_Account(std::string name, double balance)
	:Account{ name, balance } {

}