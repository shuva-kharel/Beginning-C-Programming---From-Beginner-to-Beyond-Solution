#include "Account.h"

std::ostream& operator<< (std::ostream& out, const Account& account) {
	return out << *account.name << " : " << *account.balance << "\n";
}

bool Account::deposit(double amount) {
	if (amount <= 0){
		std::cout << "\nAmount should be greate than 0";
		return false;
	}
	else{
		*balance += amount;
		return true;
	}
}

bool Account::withdraw(double amount) {
	if (*balance < amount){
		return false;
	}
	else {
		*balance -= amount;
		return true;
	}
}

double Account::get_balance() {
	return *balance;
}

Account::Account(std::string set_name, double set_balance) 
	:name{ new std::string{set_name} }, balance{ new double {set_balance} } {

}