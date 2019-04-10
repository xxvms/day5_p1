#include "Exercise.h"

bool Exercise::read_file_string() {
  std::ifstream file("Day5.txt");
  std::string data{};
  if (!file.is_open() || file.eof()) {
    // std::cout << "File is not open\n";
    return false;
  } else {
    while (std::getline(file, data)) {
      import_file = data;
    }
    // std::cout << "Size of the imported file: " << import_file.size() << '\n';
  }

  std::cout << "End of reading the file\n";
  return true;
} // changing SOURCE FILE!!!!!!!!

int Exercise::split_the_string() {
  read_file_string();
  if (!import_file.empty()) {
    std::cout << "import_file size: " << import_file.size() << '\n';

    for (auto a : import_file) {
      if (a) {
        files.push_back(a);
      }
    }
    return files.size();
  } else {
    return false;
  }
}

std::vector<char> Exercise::compare_chars() {
  split_the_string();
  std::vector<std::string> polymer_bank{};


  auto start = files.begin();
  while (start != files.end()) {

          if (result_bank.empty()){

            result_bank.emplace_back(*start);

          } else {

            auto& res_b = result_bank.at(result_bank.size()-1);

            if ( (res_b + 32) == *start) {

              result_bank.pop_back();
              *start = 0;

            } else if ( (res_b - 32) == *start){

              result_bank.pop_back();
              *start = 0;

            } else {

              result_bank.emplace_back(*start);

            }
          }

    if (start != files.end()) {
      std::advance(start, 1);    }

  if (result_bank.size() == 10){

    std::string tmp{};

    for (auto a : result_bank){

      tmp += a;
    }

    polymer_bank.emplace_back(tmp);

    tmp.clear();
    result_bank.clear();
  }

  }
  std::cout << "POLYMER BANK: " << polymer_bank.size() << '\n';


  return result_bank;
}

int Exercise::make_polymer(){

  std::string tmp{};
  std::vector<std::string> polymer_bank{};
  int counter = 0;

  for (size_t i = 0; i < result_bank.size(); i++){

    tmp += result_bank.at(i);
    counter++;

    if (counter == 10){
      polymer_bank.emplace_back(tmp);
      counter = 0;
      tmp.clear();
    }
  }

  std::cout << "size of the polymer: " << polymer_bank.size() << '\n';
  return polymer_bank.size();

}
