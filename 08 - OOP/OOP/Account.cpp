#include "Account.h"

void Account::set_name(std::string set_name) {
	name = set_name;
}

std::string Account::get_name() {
	return name;
}

bool Account::deposit(double amount) {
	balance += amount;
	return true;
}

bool Account::withdraw(double amount) {
	if ((amount - balance) >= balance) {
		balance -= amount;
		return true;
	}
	else {
		return false;
	}
}


// Overloading Constructor
Account::Account(std::string name, double balance)
	: name{ name }, balance{ balance }{
}