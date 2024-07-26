#include "first_part/data.h"
#include "first_part/top_users_movies.h"
#include "second_part/functions.h"
#include <cmath>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{

  Data data("data/train.csv");

  PrintTopUsersMovies(data.ratingCountsByUser(), data.ratingCountsByMovie());

  int Id = 0;
  ofstream output("LastSubmission.csv");
  output << "ID,Predicted" << endl;
  unordered_map<int, map<int, float>> ratings;

  ifstream file("data/train.csv");
  string line;
  getline(file, line);
  while (getline(file, line))
  {
    stringstream ss(line);
    int userId, movieId;
    float rating;
    string s;

    try
    {
      getline(ss, s, ',');
      userId = stoi(s);
      getline(ss, s, ',');
      movieId = stoi(s);
      getline(ss, s, ',');
      rating = stof(s);

      ratings[userId][movieId] = rating;
    }
    catch (...)
    {
      // do nothing
    }
  }
  file.close();

  // Read the test.csv file and store the data in a vector of Rating structures
  vector<Rating> testRatings;

  ifstream testInput("data/test.csv");
  string linee;
  getline(testInput, linee); // skip the header row
  while (getline(testInput, linee))
  {
    stringstream ss(linee);
    int userId, movieId, Id;

    string s;

    try
    {
      getline(ss, s, ',');
      Id = stoi(s);
      getline(ss, s, ',');
      userId = stoi(s);
      getline(ss, s, ',');
      movieId = stoi(s);

      Rating r = {userId, movieId};
      testRatings.push_back(r);
    }
    catch (...)
    {
      // do nothing
    }
  }
  testInput.close();

  for (const Rating &rating : testRatings)
  {
    float predictedRating =
        predictRating(ratings, rating.movieId, rating.userId, 35);

    float roundedPrediction = round(predictedRating * 2) / 2;

    // cout << "ID:" << Id << " Predicted rating for movie " << rating.movieId
    //<< " by user " << rating.userId << ": " << roundedPrediction << endl;
    output << Id << " , " << roundedPrediction << endl;

    Id++;
  }

  return 0;
}
