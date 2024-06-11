#include "Movie.h"

void Movie::set_movie_name(std::string movie_name_pass) {
	movie_name = movie_name_pass;
};

void Movie::set_movie_rating(std::string movie_rating_pass) {
	movie_rating = movie_rating_pass;
};

void Movie::set_movie_watch_count(int movie_watch_count_pass) {
	movie_watch_time = movie_watch_count_pass;
};


std::string Movie::get_movie_name() {
	return movie_name;
}

std::string Movie::get_movie_rating() {
	return movie_rating;
}

int Movie::get_movie_watch_count() {
	return movie_watch_time;
}

void Movie::watch_increase() {
	movie_watch_time++;
}

Movie::Movie(std::string movie_name, std::string movie_rating, int movie_watch_time){
	Movie::set_movie_name(movie_name);
	Movie::set_movie_rating(movie_rating);
	Movie::set_movie_watch_count(movie_watch_time);
};