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

TEST_CASE("String charAt", "[String]"){
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
    smce::Board br{};
    REQUIRE(br.configure({.uart_channels = {{/* uart channel with default values */}}}));
    REQUIRE(br.attach_sketch(sk));
    REQUIRE(br.start());

    auto bv = br.view();
    REQUIRE(bv.valid());
    auto uart0 = bv.uart_channels[0];
    REQUIRE(uart0.exists());
    REQUIRE(uart0.rx().exists());
    REQUIRE(uart0.tx().exists());
    std::this_thread::sleep_for(1000ms);

    do {
        std::this_thread::sleep_for(1000ms);
    } while (uart0.tx().size() <= 0);
    REQUIRE(uart0.tx().front()=='l');


//    std::array out = {'H', 'E', 'L', 'L', 'O', ' ', 'U', 'A', 'R', 'T', '\0'};
//    std::array<char, out.size()> in{};
//    REQUIRE(uart0.rx().write(out) == out.size());
//    int ticks = 16'000;
//    do {
//        if (ticks-- == 0)
//            FAIL("Timed out");
//        std::this_thread::sleep_for(1ms);
//    } while (uart0.tx().size() != in.size());
//    REQUIRE(uart0.tx().front() == 'H');
//    REQUIRE(uart0.tx().read(in) == in.size());
//    REQUIRE(uart0.tx().front() == '\0');
//    REQUIRE(uart0.tx().size() == 0);
//    REQUIRE(in == out);
//    REQUIRE(uart0.tx().front()=='H');



    // clang-format on
//    const auto ec = tc.compile(sk);
//    if (ec)
//        std::cerr << ec.message() << '\n' << tc.build_log().second << std::endl;
//    REQUIRE_FALSE(ec);
//    String str("Hello World");
//    const char* character = "H";
//    int result = 0;
//    REQUIRE(result == 0);
}
