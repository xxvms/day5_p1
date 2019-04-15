#include "Exercise.h"
#include "catch.hpp"
#include <fstream>

TEST_CASE("Test reading from file", "Read File"){

  GIVEN("File that returns bool on read"){
    Exercise Blach;
    auto miaow = Blach.read_file_string();
    REQUIRE(!miaow.empty());
    REQUIRE_FALSE(miaow.empty());
  }
}

TEST_CASE("Split the string function", "Check if we can print each char"){
  GIVEN("File is not empty"){
    Exercise Blach;
    WHEN("We are able to print all separate chars inside the string"){
      REQUIRE(!Blach.read_file_string().empty());
      auto file_input = Blach.read_file_string();
      REQUIRE_FALSE(Blach.split_the_string(file_input).empty());
      REQUIRE_FALSE(file_input.empty());
    }
  }

}

TEST_CASE("Compare 1st and 2nd char"){
  GIVEN("File is not empty"){
    Exercise Blach;
    GIVEN("String is created then imported to a vector"){
      WHEN("We compare two adjusted chars"){
        auto file_input = Blach.read_file_string();
        REQUIRE_FALSE(file_input.empty());

        auto file_input_vec = Blach.split_the_string(file_input);
        REQUIRE_FALSE(file_input_vec.empty());

        auto small_vec =  Blach.eliminate_pairs(file_input_vec);
        REQUIRE(!small_vec.empty());
        REQUIRE_FALSE(small_vec.empty());
      }
    }
  }
}

TEST_CASE("Remove one pair"){
  GIVEN("File is not empty"){

    Exercise Blach;

    auto file_input = Blach.read_file_string();
    REQUIRE_FALSE(file_input.empty());

    auto file_input_vec = Blach.split_the_string(file_input);
    REQUIRE_FALSE(file_input_vec.empty());

    auto small_vec =  Blach.eliminate_pairs(file_input_vec);
    REQUIRE(!small_vec.empty());
    REQUIRE_FALSE(small_vec.empty());

    auto final_count = Blach.clean_and_compare(small_vec);

  }
}
