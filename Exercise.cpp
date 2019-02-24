#include "Exercise.h"

bool Exercise::read_file_string() {
  std::ifstream file("Day5.txt");
  std::string data{};
  if (!file.is_open()) {
    //std::cout << "File is not open\n";
    return false;
  } else {
    while (std::getline(file, data)) {
      import_file = data;
    }
    //std::cout << "Size of the imported file: " << import_file.size() << '\n';
  }

  std::cout << "End of reading the file\n";
  return true;
}// changing SOURCE FILE!!!!!!!!

bool Exercise::split_the_string() {
  read_file_string();
  if (!import_file.empty()){
    std::cout << "import_file size: " << import_file.size() << '\n';

    for (auto a : import_file){
      if (a){
        std::cout << a << ',';
      }
    }
    return true;
  } else {
    return false;
  }

}
