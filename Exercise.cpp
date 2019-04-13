#include "Exercise.h"

bool Exercise::read_file_string() {
  std::ifstream file("Day5.txt");
  std::string data{};
  if (!file.is_open() || file.eof()) {

    std::cerr << "No file exist\n";
    throw;

  } else {
    while (std::getline(file, data)) {
      import_file = data;
    }
  }
  return true;
} // changing SOURCE FILE!!!!!!!!

int Exercise::split_the_string() {
  read_file_string();
  if (!import_file.empty()) {
   // std::cout << "import_file size: " << import_file.size() << '\n';
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

std::vector<char> Exercise::eliminate_pairs() {
  split_the_string();

  auto first_char = files.begin();

  while (first_char != files.end()) {

    if (result_bank.empty()) {

      result_bank.emplace_back(*first_char);

    } else {

      if ((result_bank.back() + 32) == *first_char) {

        result_bank.pop_back();

      } else if ((result_bank.back() - 32) == *first_char) {

        result_bank.pop_back();

      } else {
        result_bank.emplace_back(*first_char);
      }
    }

    std::advance(first_char, 1); // moves 1 char forward on first_char

  }
  std::cout << "Polymer Remaining: " << result_bank.size() << '\n';

  return result_bank; // I can remove this at least now I am not using this value.
}



