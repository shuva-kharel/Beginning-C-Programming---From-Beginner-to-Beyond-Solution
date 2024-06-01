#include <iostream>
using namespace std;

int main() {
	// default values
	int amt{ 0 };
	int dollars_value{ 100 };
	int quarters_value{ 25 };
	int dimes_value{ 10 };
	int nickels_value{ 5 };
	int pennies_value{ 1 };

	int dollars,quarters, dimes, nickels, pennies;

	cout << "\nEnter an amount in cents: ";
	cin >> amt;

	dollars = amt / dollars_value;
	amt -= dollars * dollars_value;

	quarters = amt / quarters_value;
	amt -= quarters * quarters_value;

	dimes = amt / dimes_value;
	amt -= dimes * dimes_value;

	nickels = amt / nickels_value;
	amt -= nickels * nickels_value;

	pennies = amt;

	cout << "\nYou can provide this change as follows:";
	cout << "\nDollars: " << dollars;
	cout << "\nQuarters: " << quarters ;
	cout << "\nDimes: " << dimes;
	cout << "\nNickels: " << nickels;
	cout << "\nPennies: " << pennies;

	return 0;
}