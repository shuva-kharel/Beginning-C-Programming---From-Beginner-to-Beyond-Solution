#include "Account_Utility.h"
#include "Account.h"
#include "Saving_Account.h"
#include <vector>

// Account
void display(const std::vector <Account>& account) {
	std::cout << "\n=========DISPLAYING ACCOUNT=========\n";
	for (const auto acc : account) {
		std::cout << acc;
	}
}

void deposit(std::vector <Account>& account, double amount) {
	std::cout << "\n\n==========DEPOSIT INTO ACCOUNT==========\n";
	for (auto& acc : account) {
		if (acc.deposit(amount)) {
			std::cout << amount  << " Depositing\n";
			std::cout << "NEW BALANCE = " << acc << "\n";
		}
		else {
			std::cout << "\nFAILED TO DEPOSIT IN " << acc << "\n";
		}
	}
}

void withdraw(std::vector <Account>& account, double amount) {
	std::cout << "\n\n==========WITHDRAW FROM ACCOUNT==========\n";
	for (auto acc : account) {
		if (acc.withdraw(amount) == true) {
			std::cout << amount << " Withdrawing\n";
			std::cout << "NEW BALANCE = " << acc << "\n";
		}
		else {
			std::cout << "FAILED TO WITHDRAW " << amount << " FROM " << acc << "\n";
		}
	}
}


// Saving_Account
void display(const std::vector <Saving_Account>& account) {
	std::cout << "\n=========DISPLAYING SAVING ACCOUNT=========\n";
	for (const auto& acc : account) {
		std::cout << acc;
	}
}

void deposit(std::vector <Saving_Account>& account, double amount) {
	std::cout << "\n\n==========DEPOSIT INTO SAVING ACCOUNT==========\n";
	for (auto& acc : account) {
		if (acc.deposit(amount)) {
			std::cout << amount << " Depositing\n";
			std::cout << "NEW BALANCE = " << acc << "\n";
		}
		else {
			std::cout << "\nFAILED TO DEPOSIT IN " << acc << "\n";
		}
	}
}

void withdraw(std::vector <Saving_Account>& account, double amount) {
	std::cout << "\n\n==========WITHDRAW FROM SAVING ACCOUNT==========\n";
	for (auto acc : account) {
		if (acc.withdraw(amount) == true) {
			std::cout << amount << " Withdrawing\n";
			std::cout << "NEW BALANCE = " << acc << "\n";
		}
		else {
			std::cout << "FAILED TO WITHDRAW " << amount << " FROM " << acc << "\n";
		}
	}
}


// Trust_Account
void display(const std::vector <Trust_Account>& account) {
	std::cout << "\n=========DISPLAYING TRUST ACCOUNT=========\n";
	for (const auto& acc : account) {
		std::cout << acc;
	}
}

void deposit(std::vector <Trust_Account>& account, double amount) {
	std::cout << "\n\n==========DEPOSIT INTO TRUST ACCOUNT==========\n";
	for (auto& acc : account) {
		if (acc.deposit(amount)) {
			std::cout << amount << " Depositing\n";
			std::cout << "NEW BALANCE = " << acc << "\n";
		}
		else {
			std::cout << "\nFAILED TO DEPOSIT IN " << acc << "\n";
		}
	}
}

void withdraw(std::vector <Trust_Account>& account, double amount) {
	std::cout << "\n\n==========WITHDRAW FROM TRUST ACCOUNT==========\n";
	for (auto acc : account) {
		if (acc.withdraw(amount) == true) {
			std::cout << amount << " Withdrawing\n";
			std::cout << "NEW BALANCE = " << acc << "\n";
		}
		else {
			std::cout << "\n\nFAILED TO WITHDRAW " << amount << " FROM " << acc << "\n";
			std::cout << "POSSIBLE REASONS:\n1.Insufficent Balance\n2.Over Withdraw\n3.Can only withdraw 20% of Total Balance\n";
		}
	}
}



// Checking_Account
void display(const std::vector <Checking_Account>& account) {
	std::cout << "\n=========DISPLAYING Checking ACCOUNT=========\n";
	for (const auto& acc : account) {
		std::cout << acc;
	}
}

void deposit(std::vector <Checking_Account>& account, double amount) {
	std::cout << "\n\n==========DEPOSIT INTO Checking ACCOUNT==========\n";
	for (auto& acc : account) {
		if (acc.deposit(amount)) {
			std::cout << amount << " Depositing\n";
			std::cout << "NEW BALANCE = " << acc << "\n";
		}
		else {
			std::cout << "\nFAILED TO DEPOSIT IN " << acc << "\n";
		}
	}
}

void withdraw(std::vector <Checking_Account>& account, double amount) {
	std::cout << "\n\n==========WITHDRAW FROM Checking ACCOUNT==========\n";
	for (auto acc : account) {
		if (acc.withdraw(amount) == true) {
			std::cout << amount << " Withdrawing\n";
			std::cout << "NEW BALANCE = " << acc << "\n";
		}
		else {
			std::cout << "\n\nFAILED TO WITHDRAW " << amount << " FROM " << acc << "\n";
			std::cout << "POSSIBLE REASONS:\n1.Insufficent Balance\n";
		}
	}
}