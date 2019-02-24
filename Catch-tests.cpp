#include "Exercise.h"
#include "catch.hpp"
#include <fstream>

TEST_CASE("Test reading from file", "Read File"){

  GIVEN("File that returns bool on read"){
    Exercise blach;
    auto miaow = blach.read_file_string();
    REQUIRE(miaow == true);
    REQUIRE_FALSE(miaow != true);
  }
}
TEST_CASE("Split the string function", "Check if we can print each char"){
  GIVEN("File is not empty"){
    Exercise blach;
    WHEN("We are able to print all separate chars inside the string"){
      REQUIRE(blach.read_file_string());
      REQUIRE(blach.split_the_string());
    }
  }

}
