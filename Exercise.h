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
    //std::vector<char>result_bank{};

public:
  std::string read_file_string();
  std::vector<char> split_the_string(std::string input);
  std::vector<char> eliminate_pairs(const std::vector<char>& input);
  std::vector<int> clean_and_compare(const std::vector<char>& input);
};



#endif //DAY5_P1_EXERCISE_H
