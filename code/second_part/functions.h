#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <algorithm>
#include <cmath>
#include <functional>
#include <map>
#include <unordered_map>
#include <vector>

using namespace std;

struct Rating
{
  int userId;
  int movieId;
  float rating;
};

float dotProduct(const map<int, float> &v1, const map<int, float> &v2);

float magnitude(const map<int, float> &v);

float cosineSimilarity(const map<int, float> &v1, const map<int, float> &v2);

float predictRating(const unordered_map<int, map<int, float>> &ratings, int userId, int movieId, int K);

#endif
