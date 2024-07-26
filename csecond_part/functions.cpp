#include "functions.h"

float dotProduct(const map<int, float> &v1, const map<int, float> &v2)
{
  float result = 0.0;
  for (auto it = v1.begin(); it != v1.end(); ++it)
  {
    auto it2 = v2.find(it->first);
    if (it2 != v2.end())
    {
      result += it->second * it2->second;
    }
  }
  return result;
}

float magnitude(const map<int, float> &v)
{
  float result = 0.0;
  for (auto it = v.begin(); it != v.end(); ++it)
  {
    result += pow(it->second, 2);
  }
  return sqrt(result);
}

float cosineSimilarity(const map<int, float> &v1, const map<int, float> &v2)
{
  float numerator = dotProduct(v1, v2);
  float denominator = magnitude(v1) * magnitude(v2);
  float result = numerator / denominator;
  return result;
}

float predictRating(const unordered_map<int, map<int, float>> &ratings, int userId, int movieId, int K)
{
  float numerator = 0.0;
  float denominator = 0.0;

  auto it = ratings.find(movieId);
  if (it != ratings.end())
  {
    map<int, float> movieRatings1 = it->second;
    vector<pair<int, float>> neighbors;
    for (auto it2 = ratings.begin(); it2 != ratings.end(); ++it2)
    {
      map<int, float> movieRatings2 = it2->second;
      auto it3 = movieRatings2.find(userId);
      if (it3 != movieRatings2.end())
      {
        float similarity = cosineSimilarity(movieRatings1, movieRatings2);

        neighbors.push_back(make_pair(it2->first, similarity));
      }
    }

    sort(neighbors.begin(), neighbors.end(),
         [](auto &p1, auto &p2)
         { return p1.second > p2.second; });

    neighbors.resize(K);

    for (auto &p : neighbors)
    {
      auto it = ratings.find(p.first);
      if (it != ratings.end())
      {
        auto it2 = it->second.find(userId);
        if (it2 != it->second.end())
        {
          numerator += p.second * it2->second;
        }
      }

      denominator += p.second;
    }
  }

  if (denominator != 0)
  {
    return numerator / denominator;
  }
  else
  {
    return 0;
  }
}
