#ifndef DAY5_P1_EXERCISE_H
#define DAY5_P1_EXERCISE_H

#include <vector>
#include <fstream>
#include <string>
#include <algorithm>
#include <iostream>

class Exercise {
private:
    std::string import_file{};
    std::vector<char>files{};
public:
  bool read_file_string();
  int split_the_string();
  int compare_chars();

};



#endif //DAY5_P1_EXERCISE_H
