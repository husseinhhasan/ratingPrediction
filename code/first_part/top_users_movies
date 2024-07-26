// top_users_movies.cpp
#include "top_users_movies.h"
#include <fstream>
#include <sstream>
#include <utility>
using namespace std;

void PrintTopUsersMovies(const unordered_map<int, int> &ratingCountsByUser, const unordered_map<int, int> &ratingCountsByMovie)
{
     // Sort the maps in decreasing order by the number of ratings
     vector<pair<int, int>> sortedRatingCountsByUser(begin(ratingCountsByUser),
                                                     end(ratingCountsByUser));
     sort(begin(sortedRatingCountsByUser), end(sortedRatingCountsByUser),
          [](const auto &a, const auto &b)
          { return a.second > b.second; });
     vector<pair<int, int>> sortedRatingCountsByMovie(begin(ratingCountsByMovie),
                                                      end(ratingCountsByMovie));
     sort(begin(sortedRatingCountsByMovie), end(sortedRatingCountsByMovie),
          [](const auto &a, const auto &b)
          { return a.second > b.second; });

     // Print the top 10 users and movies along with their rating counts
     cout << "Top 10 users:" << endl;
     for (int i = 0; i < 10; i++)
     {
          cout << sortedRatingCountsByUser[i].first << ": "
               << sortedRatingCountsByUser[i].second << endl;
     }
     cout << endl;
     cout << "Top 10 movies:" << endl;
     for (int i = 0; i < 10; i++)
     {
          cout << sortedRatingCountsByMovie[i].first << ": "
               << sortedRatingCountsByMovie[i].second << endl;
     }
}
