#ifndef DATA_H
#define DATA_H

#include <fstream>
#include <sstream>
#include <unordered_map>
using namespace std;

class Data
{
public:
  Data(const string &Mfile);
  unordered_map<int, int>
  ratingCountsByUser() const;
  unordered_map<int, int>
  ratingCountsByMovie() const;

private:
  unordered_map<int, int> userCounts_;
  unordered_map<int, int> movieCounts_;
};

#endif
