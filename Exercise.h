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
public:
    bool read_file_string();
    bool split_the_string();

};



#endif //DAY5_P1_EXERCISE_H
