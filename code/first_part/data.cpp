// data.cpp
#include "data.h"
#include <iostream>
using namespace std;

Data::Data(const string &Mfile)
{
  ifstream input(Mfile);

  // Read the input file line by line
  string line;
  while (getline(input, line))
  {
    // Split the line into user id, movie id, and rating
    stringstream ss(line);
    int userId, movieId, rating;
    getline(ss, line, ',');
    try
    {
      userId = stoi(line);
      getline(ss, line, ',');
      movieId = stoi(line);
      getline(ss, line, ',');
      rating = stoi(line);
    }
    catch (const invalid_argument &e)
    {
      cerr << "Error proccesing data: " << line << endl;
      continue;
    }

    // Increment the count for the user and movie
    userCounts_[userId]++;
    movieCounts_[movieId]++;
  }
}

unordered_map<int, int> Data::ratingCountsByUser() const
{
  return userCounts_;
}

unordered_map<int, int> Data::ratingCountsByMovie() const
{
  return movieCounts_;
}
