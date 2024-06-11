#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <iostream>

class Movie{
private:
	std::string movie_name;
	std::string movie_rating;
	int movie_watch_time;

public:
	void set_movie_name(std::string movie_name);
	void set_movie_rating(std::string movie_rating);
	void set_movie_watch_count(int movie_watch_count);
	void watch_increase();

	std::string get_movie_name();
	std::string get_movie_rating();
	int get_movie_watch_count();

	Movie(std::string movie_name, std::string movie_rating, int movie_watch_time);
};

#endif