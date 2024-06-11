#include <iostream>
#include "Movies.h"

int main() {
	Movies my_movies;
	int choise;
	do{
		std::cout << "\n\t\t\t\t\t\tMovie Management";
		std::cout << "\nNote: - A bug which I don't know how to fix(Please Add Movies without space, better use underscore and dash).";
		std::cout << "\n0. Add New Movie";
		std::cout << "\n1. Increment Movie Watch";
		std::cout << "\n2. Display all Movies";
		std::cout << "\n3. Quit";
		std::cout << "\n\nEnter your choise: ";
		std::cin >> choise;

		if (choise == 0) {
			std::cout << "\n\n\t\t\t\t\t\tAdding New Movie.";
			my_movies.add_movie();
		}
		else if (choise == 1) {
			std::cout << "\n\n\t\t\t\t\t\tIncreasing Movie Watch.";
			my_movies.watch_increment();
		}
		else if (choise == 2) {
			std::cout << "\n\n\t\t\t\t\t\tDisplaying all movies.";
			my_movies.display_movies();
		}
		else if (choise == 3) {
			std::cout << "\n\n\t\t\t\t\t\tQUITING.";
			std::cout << "\n\n\t\t\t\t\t\tTHANK YOU!!!";
			return false;
		}
		else{
			std::cout << "\n\n\t\t\t\t\t\tUNKNOWN SELECTION!!!";
		}

	} while (true);

	return 0;
}

/*

- A fucked up code.
I don't know what I wrote.
I just know that it works.

But has a bug I know but got frustrated fixing it so I gave up.
The bug is the program can't input Movie name with spaces.
I know, I know we need to be using
- std::getline(std::cin, _____);
But for the first time it does work but from next run it won't take input.
I don't know how to fix it, so I gave up.

THANK YOU!!!
*/
