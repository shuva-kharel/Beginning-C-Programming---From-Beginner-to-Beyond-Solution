#include "Saving_Account.h"

std::ostream& operator<< (std::ostream& out, const Saving_Account& account) {
	return out << *account.name << " : " << *account.balance << "\n";
}

bool Saving_Account::deposit(double amount) {
	if (amount <= 0) {
		std::cout << "\nAmount should be greate than 0";
		return false;
	}
	else {
		amount += amount * (*interest_rate / 100);
		*balance += amount;
		return true;
	}
}

Saving_Account::Saving_Account(std::string name, double balance, double interest_rate) 
	:Account{ name, balance }, interest_rate{ new double{interest_rate} } {

}