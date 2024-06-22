#include <iostream>
#include <string>
#include <vector>
#include "Account_Utility.h"

int main() {
	std::cout << "\n=============WELCOME TO BANK MANAGEMENT=============\n";

	std::vector <Account> accounts;
	accounts.push_back(Account{ "Acc1 ", 10 });
	accounts.push_back(Account{ "Acc2 ", 20 });
	accounts.push_back(Account{ "Acc3 ", 50 });

	display(accounts);
	deposit(accounts, 1000);
	withdraw(accounts, 500);
	withdraw(accounts, 1500);

	std::vector <Saving_Account> saving_accounts;
	saving_accounts.push_back(Saving_Account{ "SACC1", 50, 10 });
	saving_accounts.push_back(Saving_Account{ "SACC2", 13, 10 });
	saving_accounts.push_back(Saving_Account{ "SACC3", 2420, 10 });

	display(saving_accounts);
	deposit(saving_accounts, 1000);
	withdraw(saving_accounts, 500);
	withdraw(saving_accounts, 1500);

	
	std::vector <Trust_Account> trust_accounts;
	trust_accounts.push_back(Trust_Account{ "TACC1", 50, 13 });
	trust_accounts.push_back(Trust_Account{ "TACC2", 13, 13 });
	trust_accounts.push_back(Trust_Account{ "TACC3", 2420, 13 });

	display(trust_accounts);
	deposit(trust_accounts, 10000);
	withdraw(trust_accounts, 500);
	withdraw(trust_accounts, 1500);
	withdraw(trust_accounts, 3000);
	withdraw(trust_accounts, 1500);
	withdraw(trust_accounts, 1700);

	std::vector <Checking_Account> checking_accounts;
	checking_accounts.push_back(Checking_Account{ "Acc1 ", 10 });
	checking_accounts.push_back(Checking_Account{ "Acc2 ", 20 });
	checking_accounts.push_back(Checking_Account{ "Acc3 ", 50 });

	display(accounts);
	deposit(checking_accounts, 1000);
	withdraw(checking_accounts, 500);
	withdraw(checking_accounts, 1500);


	return 0;
}