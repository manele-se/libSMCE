
#include <chrono>
#include <fstream>
#include <future>
#include <iostream>
#include <catch2/catch_test_macros.hpp>
#include "SMCE/Board.hpp"
#include "SMCE/Sketch.hpp"
#include "SMCE/Toolchain.hpp"
#include "defs.hpp"

using namespace std::literals;

TEST_CASE("one equals one", "[Arduino]") {
    const int number = 1;
    REQUIRE(number == 1);
}

TEST_CASE("one equals one", "[Arduino]") {
    const int number = 1;
    REQUIRE(number == 1);
}

TEST_CASE("Analog Read", "[Arduino]") {}
