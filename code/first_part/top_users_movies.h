// top_users_movies.h
#ifndef TOP_USERS_MOVIES_H
#define TOP_USERS_MOVIES_H
#include <algorithm>
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void PrintTopUsersMovies(const unordered_map<int, int> &ratingCountsByUser,
                         const unordered_map<int, int> &ratingCountsByMovie);

#endif // TOP_USERS_MOVIES_H
