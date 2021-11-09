#include <algorithm>
#include <bit>
#include <cctype>
#include <cstring>
#include <boost/algorithm/string/predicate.hpp>
//#include "WString.h"
#include "Ardrivo/WString.h"

#include <chrono>
#include <fstream>
#include <future>
#include <iostream>
#include <catch2/catch_test_macros.hpp>
#include "defs.hpp"


using namespace std::literals;

TEST_CASE("one equals one", "[String]") {
    const int number = 1;
    REQUIRE(number == 1);
}

TEST_CASE("number equals two", "[String]") {
    const int number = 1;
    REQUIRE(number == 2);
}

/*TEST_CASE("number equals two", "[Arduino]") {
    const char *s = "Hello, World!";
    std::string str(s);

    const char *t = "Hello, World!";
    std::string str1(t);

    int result = str.compareTo(str1);
    REQUIRE(result == 1);
}*/

TEST_CASE("indexOf", "[String]"){
    const char *s = "Hello";
    String testString = String::String(s);

    char character = 'H';

    int result = testString.indexOf(character);
    REQUIRE(result == 0);
}
