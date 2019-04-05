#include "Exercise.h"

bool Exercise::read_file_string() {
  std::ifstream file("Day5test.txt");
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

int Exercise::split_the_string() {
  read_file_string();
  if (!import_file.empty()){
    std::cout << "import_file size: " << import_file.size() << '\n';

    for (auto a : import_file){
      if (a){
        files.push_back(a);
      }
    }
    return files.size();
  } else {
    return false;
  }
}
int Exercise::compare_chars() {
  split_the_string();
  for (auto a : files){

    //todo I think switch would be good fit for this if not maybe regex???
  }
  return 0; // todo change that
}
