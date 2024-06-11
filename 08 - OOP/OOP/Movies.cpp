#include "Movies.h"

bool Movies::movie_repeat(std::string movie_name_temp) {
	int i{ 0 };
	bool break_condition{ false };
	while (i < movies_collection.size() && break_condition == false){
		if (movie_name_temp == movies_collection.at(i).get_movie_name()){
			break_condition = true;
			return true;
		}
		else{
			return false;
		}
	}
}

void Movies::watch_increment() {
	int* movie_location{ new int { 0 } };
	std::cout << "\nEnter the movie name to increment: ";
	std::cin >> movie_name_temp;
	if (movie_repeat(movie_name_temp) == false) {
		std::cout << "\nThe Movie doesn't exist";
	}
	else {
		for (int i = 0; i < movies_collection.size(); i++){
			if (movie_name_temp == movies_collection.at(i).get_movie_name()) {
				*movie_location = i;
			}
		}
		movies_collection.at(*movie_location).watch_increase();
		std::cout << "\nINCREASED WATCH TIME of " << movies_collection.at(*movie_location).get_movie_name();
	}
}

void Movies::add_movie(){
	std::cout << "\nEnter movie name: ";
	std::cin >> movie_name_temp;

	if (movie_repeat(movie_name_temp) == true) {
		std::cout << "\n\n\n\n\nSorry! The movie already exist in the list";
	}
	else {
		std::cout << "Enter movie rating: ";
		std::cin >> movie_rating_temp;
		std::cout << "Enter movie watch: ";
		std::cin >> movie_watch_temp;
		Movies::movies_collection.push_back(Movie::Movie(movie_name_temp, movie_rating_temp, movie_watch_temp));
	}
}

void Movies::display_movies() {
	for (int i = 0; i < movies_collection.size(); i++) {
		std::cout << std::endl;
		std::cout << movies_collection.at(i).get_movie_name() << ", ";
		std::cout << movies_collection.at(i).get_movie_rating() << ", ";
		std::cout << movies_collection.at(i).get_movie_watch_count();
		std::cout << std::endl;
	}
};

Movies::Movies() {
}