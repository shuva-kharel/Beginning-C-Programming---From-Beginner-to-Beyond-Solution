#include <iostream>
#include <vector>
using namespace std;

// user-defined functions
void display_menu() {
	cout << "\nP - Print numbers";
	cout << "\nA - Add a number";
	cout << "\nM - Display mean of the numbers";
	cout << "\nS - Display the smallest number";
	cout << "\nL - Display the largest number";
	cout << "\nR - Check no. of time the number has been repeated";
	cout << "\nC - Clear the collection.";
	cout << "\nQ - Quit";
}

char enter_choice() {
	char choice;
	cout << "\nEnter your choice: ";
	cin >> choice;

	return  toupper(choice);
}

void empty_collection() {
	cout << "\n[ ] - The collection is empty.";
	cout << "\nPlease add some numbers in the collection.\n";
}

void print_collection(vector <int> &numbers) {
	if (numbers.size() == 0) {
		empty_collection();
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

void add_in_collection(vector <int> &numbers) {
	int add_number;
	cout << "\nEnter the number you want to add in collection: ";
	cin >> add_number;
	numbers.push_back(add_number);
	cout << "\n" << add_number << " has been added in the number collection.\n";
}

void mean_of_collection(vector <int>& numbers) {
	float sum{0};
	float mean{0};

	if (numbers.size() == 0) {
		empty_collection();
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

void smallest_in_collection(vector <int>& numbers) {
	int smallest;

	if (numbers.size() == 0) {
		empty_collection();
	}
	else if (numbers.size() < 2) {
		cout << "\Not enough data to calculate.\n";
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

void largest_in_collection(vector <int>& numbers) {
	int largest;

	if (numbers.size() == 0) {
		empty_collection();
	}
	else if (numbers.size() < 2) {
		cout << "\Not enough data to calculate.\n";
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

void check_repeated_number_in_collection(vector <int>& numbers) {
	int repeat_check{ 0 };
	int repeat_check_time{ 0 };

	if (numbers.size() == 0) {
		empty_collection();
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

void clear_collection(vector <int>& numbers) {
	if (numbers.size() == 0) {
		empty_collection();
	}
	else
	{
		numbers.clear();
		cout << "\nThe number collection has been cleared.\n";
	}
}

void quit_program() {
	cout << "\nGood Bye!!!\n";
}

void unknown_selection() {
	cout << "\nUnknown selection, please try again.\n" << endl;
}

int main() {
	vector <int> numbers;
	char choice;
		 
	while(true){
		display_menu();
		choice = enter_choice();

		if (choice == 'P'){
			print_collection(numbers);
		}
		else if (choice == 'A') {
			add_in_collection(numbers);
		}
		else if (choice == 'M') {
			mean_of_collection(numbers);
		}
		else if (choice == 'S') {
			smallest_in_collection(numbers);
		}
		else if (choice == 'L') {
			largest_in_collection(numbers);
		}
		else if (choice == 'R') {
			check_repeated_number_in_collection(numbers);
		}
		else if (choice == 'C') {
			clear_collection(numbers);
		}
		else if (choice == 'Q') {
			quit_program();
			break;
		}
		else {
			unknown_selection();
		}
	}
}