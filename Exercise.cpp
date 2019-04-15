#include "Exercise.h"

std::string Exercise::read_file_string() {
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
  return import_file;

} // changing SOURCE FILE!!!!!!!!

std::vector<char> Exercise::split_the_string(std::string input) {

  if (!input.empty()) {

    for (auto a : input) {
      if (a) {
        files.push_back(a);
      }
    }
  }
  return files;
}

std::vector<char> Exercise::eliminate_pairs(const std::vector<char>& input) {

  auto input1 = input;

  std::vector<char> bank_tmp{};

  auto first_char = input1.begin();

  while (first_char != input1.end()) {

    if (bank_tmp.empty()) {

      bank_tmp.emplace_back(*first_char);

    } else {

      if ((bank_tmp.back() + 32) == *first_char) {

        bank_tmp.pop_back();

      } else if ((bank_tmp.back() - 32) == *first_char) {

        bank_tmp.pop_back();

      } else {
        bank_tmp.emplace_back(*first_char);
      }
    }

    std::advance(first_char, 1); // moves 1 char forward on first_char
  }

  return bank_tmp;
}

std::vector<int> Exercise::clean_and_compare(const std::vector<char>& input) {

  auto source = input;
  std::vector<char> compare_this{};
  std::vector<int> sizes_of_each{};

  for (char letters = 'A'; letters <= 'Z'; letters++) {
    for (size_t i = 0; i < source.size(); i++) {

      if (source.at(i) != letters && source.at(i) != (letters + 32)) {
        compare_this.emplace_back(source.at(i));
      }
    }

    auto final_transform = eliminate_pairs(compare_this);
    sizes_of_each.emplace_back(final_transform.size());
    compare_this.clear();
  }
  std::sort(std::begin(sizes_of_each), std::end(sizes_of_each));

  return sizes_of_each;
}
