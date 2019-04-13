#ifndef DAY5_P1_EXERCISE_H
#define DAY5_P1_EXERCISE_H

#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <iterator>

class Exercise {
private:
    std::string import_file{};
    std::vector<char>files{};
    std::vector<char>result_bank{};

public:
  bool read_file_string();
  int split_the_string();
  std::vector<char> eliminate_pairs();
};



#endif //DAY5_P1_EXERCISE_H
