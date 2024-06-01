#include <iostream>

using namespace std;

int main() {
	int small_room{ 0 };
	int large_room{ 0 };
	double price_small_room{ 0 };
	double price_large_room{ 0 };
	double cost{ 0 };
	double tax{ 0 };
	const int valid_days{ 30 };
	const double tax_rate {0.06};
	const double per_small_room { 25.0 };
	const double per_large_room { 35.0 };

	cout << "\n\t\t\t\tShuva's Cleaning Service";

	cout << "\n\nNumber of small rooms: ";
	cin >> small_room;

	cout << "Number of large rooms: ";
	cin >> large_room;

	cout << "\n\t\t\tEstimate For Carpet Cleaning Service";
	cout << "\n\nPrice per small rooms: $" << per_small_room;
	cout << "\nPrice per large rooms: $" << per_large_room;

	price_small_room = per_small_room * small_room;
	cout << "\nTotal Price for small room: $" << price_small_room;

	price_large_room = per_large_room * large_room;
	cout << "\nTotal Price for large room: $" << price_large_room;

	cost = price_small_room + price_large_room;
	cout << "\nTotal Cost: $" << cost;

	tax = cost * tax_rate;
	cout << "\nTax: $" << tax;

	cout << "\n====================================";
	cout << "\nTotal bill: $" << cost + tax;
	cout << "\nThis bill is valid for " << valid_days << " days";
}