#include <algorithm>
#include <bit>
#include <cctype>
#include <cstring>
#include <boost/algorithm/string/predicate.hpp>
//#include "WString.h"
#include "Ardrivo/WString.h"

#include <chrono>
#include <future>
#include <iostream>
#include <catch2/catch_test_macros.hpp>
#include "defs.hpp"
#include "SMCE/Board.hpp"
#include "SMCE/BoardConf.hpp"
#include "SMCE/BoardView.hpp"
#include "SMCE/Toolchain.hpp"


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
    smce::Toolchain tc{SMCE_PATH};
    REQUIRE(!tc.check_suitable_environment());
    // clang-format off
    smce::Sketch sk{SKETCHES_PATH "str_test", {
        .fqbn = "arduino:avr:nano",
    }};

    const auto ec = tc.compile(sk);
    if (ec)
      std::cerr << ec.message() << '\n' << tc.build_log().second << std::endl;
    REQUIRE_FALSE(ec);


    // clang-format on
//    const auto ec = tc.compile(sk);
//    if (ec)
//        std::cerr << ec.message() << '\n' << tc.build_log().second << std::endl;
//    REQUIRE_FALSE(ec);
    String str("Hello World");
//    const char* character = "H";
//    int result = 0;
//    REQUIRE(result == 0);
}
