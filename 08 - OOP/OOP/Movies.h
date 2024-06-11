#ifndef _MOVIES_H_
#define _MOVIES_H_

#include <iostream>
#include <string>
#include <vector>
#include "Movie.h"

class Movies 
{
private:
	std::string movie_name_temp{ NULL };
	std::string movie_rating_temp{ NULL };
	int movie_watch_temp{ 0 };

	std::vector <Movie> movies_collection;

public:
	bool movie_repeat(std::string movie_name_temp);
	void watch_increment();
	void add_movie();
	void display_movies();
	Movies();
};

#endif // !_MOVIES_H_
