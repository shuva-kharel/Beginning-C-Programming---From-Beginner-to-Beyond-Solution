#ifndef _ACCOUNT_UTILITY_H_
#define _ACCOUNT_UTILITY_H_

#include "Account.h"
#include "Saving_Account.h"
#include "Trust_Account.h"
#include "Checking_Account.h"
#include <vector>

// Account
void display(const std::vector <Account>& account);
void deposit(std::vector <Account>& account, double amount);
void withdraw(std::vector <Account>& account, double amount);


// Saving_Account
void display(const std::vector <Saving_Account>& account);
void deposit(std::vector <Saving_Account>& account, double amount);
void withdraw(std::vector <Saving_Account>& account, double amount);

// Trust_Account
void display(const std::vector <Trust_Account>& account);
void deposit(std::vector <Trust_Account>& account, double amount);
void withdraw(std::vector <Trust_Account>& account, double amount);


// Checking_Account
void display(const std::vector <Checking_Account>& account);
void deposit(std::vector <Checking_Account>& account, double amount);
void withdraw(std::vector <Checking_Account>& account, double amount);

#endif // !_ACCOUNT_UTILITY_H_