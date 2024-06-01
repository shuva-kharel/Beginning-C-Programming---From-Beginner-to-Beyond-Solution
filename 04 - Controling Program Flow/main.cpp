#include <iostream>
#include <vector>
using namespace std;

int main() {
	char choice;
	int add_number;
	float sum{ 0 };
	float mean{ 0 };
	int smallest{ 0 };
	int largest{ 0 };
	int repeat_check{ 0 };
	int repeat_check_time{ 0 };
	vector <int> numbers;

	while (true)
	{
		cout << "\nP - Print numbers";
		cout << "\nA - Add a number";
		cout << "\nM - Display mean of the numbers";
		cout << "\nS - Display the smallest number";
		cout << "\nL - Display the largest number";
		cout << "\nR - Check no. of time the number has been repeated";
		cout << "\nC - Clear the collection.";
		cout << "\nQ - Quit";

		cout << "\nEnter your choice: ";
		cin >> choice;

		if (choice == 'P' || choice == 'p') {
			if (numbers.size() == 0) {
				cout << "\n[ ] - The collection is empty.";
				cout << "\nPlease add some numbers in the collection.\n";
			}
			else
			{
				cout << "\nPrinting all the numbers";
				cout << "\n[ ";
				for (int i = 0; i < numbers.size(); i++) {
					cout << numbers.at(i) << " ";
				}
				cout << "]\n";
			}
		}
		else if (choice == 'A' || choice == 'a') {
			cout << "\nEnter the number you want to add in collection: ";
			cin >> add_number;
			numbers.push_back(add_number);
			cout << "\n" << add_number << " has been added in the number collection.\n";
		}
		else if (choice == 'M' || choice == 'm') {
			if (numbers.size() == 0) {
				cout << "\n[ ] - The collection is empty.";
				cout << "\nPlease add some numbers in the collection.\n";
			}
			else
			{
				sum = 0;
				for (int i = 0; i < numbers.size(); i++) {
					sum += numbers.at(i);
				}
				mean = sum / numbers.size();
				cout << "\nMean of the number collection is " << mean << endl;
			}
		}
		else if (choice == 'S' || choice == 's') {
			if (numbers.size() == 0) {
				cout << "\n[ ] - The collection is empty.";
				cout << "\nPlease add some numbers in the collection.\n";
			}
			else
			{
				for (int i = 1; i < numbers.size(); i++) {
					if (numbers.at(i) < numbers.at(i - 1)) {
						smallest = numbers.at(i);
					}
				}
				cout << "\nSmallest number in the collection is " << smallest << endl;
			}
		}
		else if (choice == 'L' || choice == 'l') {
			if (numbers.size() == 0) {
				cout << "\n[ ] - The collection is empty.";
				cout << "\nPlease add some numbers in the collection.\n";
			}
			else
			{
				for (int i = 1; i < numbers.size(); i++) {
					if (numbers.at(i) > numbers.at(i - 1)) {
						largest = numbers.at(i);
					}
				}
				cout << "\nLargest number in the collection is " << largest << endl;
			}
		}
		else if (choice == 'R' || choice == 'r') {
			if (numbers.size() == 0) {
				cout << "\n[ ] - The collection is empty.";
				cout << "\nPlease add some numbers in the collection.\n";
			}
			else
			{
				cout << "\nEnter the number to check: ";
				cin >> repeat_check;

				for (int i = 0; i < numbers.size(); i++) {
					if (repeat_check == numbers.at(i)) {
						repeat_check_time++;
					}
				}
				if (repeat_check_time >= 1) {
					cout << "\nThe number has been repeated for " << repeat_check_time << " times\n";
				}
				else
				{
					cout << "\nThe number has not been entered single time.\n";
				}
			}
		}
		else if (choice == 'C' || choice == 'c') {
			if (numbers.size() == 0) {
				cout << "\n[ ] - The collection is empty.";
				cout << "\nPlease add some numbers in the collection.\n";
			}
			else
			{
				numbers.clear();
				cout << "\nThe number collection has been cleared.\n";
			}
		}
		else if (choice == 'Q' || choice == 'q') {
			cout << "\nGood Bye!!!\n";
			break;
		}
		else {
			cout << "\nUnknown selection, please try again.\n" << endl;
		}
	}
}