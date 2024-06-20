#include "Trust_Account.h"

std::ostream& operator<< (std::ostream& out, const Trust_Account& account) {
	return out << *account.name << " : " << *account.balance << "\n";
}

bool Trust_Account::deposit(double amount) {
	if (amount <= 0) {
		std::cout << "\nAmount should be greate than 0";
		return false;
	}
	else if (amount >= 5000) {
		std::cout << "\n$50.00 Bounus Recived on Deposit of " << amount << "\n";
		amount += amount * (*interest_rate / 100) + 50;
		*balance += amount;
		return true;
	}
	else {
		amount += amount * (*interest_rate / 100);
		*balance += amount;
		return true;
	}
}

bool Trust_Account::withdraw(double amount) {
	if (*balance < amount) {
		return false;
	}
	else if(*withdraw_count > 0 && amount <= (0.2 *(*balance))) {
		*withdraw_count -= 1;
		*balance -= amount;
		return true;
	}
	else{
		return false;
	}
}

Trust_Account::Trust_Account(std::string name, double balance, double interest_rate)
	:Account{ name, balance }, interest_rate{ new double{interest_rate} } {

}