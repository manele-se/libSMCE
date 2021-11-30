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
}

TEST_CASE("String Start With", "[String]"){
    smce::Toolchain tc{SMCE_PATH};
    REQUIRE(!tc.check_suitable_environment());
    // clang-format off
    smce::Sketch sk{SKETCHES_PATH "str_startwith", {
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
    REQUIRE(uart0.tx().front()=='1');

}

