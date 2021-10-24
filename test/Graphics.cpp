/*
 *  test/BoardView.cpp
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 */

#include <array>
#include <chrono>
#include <iostream>
#include <thread>
#include <catch2/catch_test_macros.hpp>
#include "SMCE/Board.hpp"
#include "SMCE/BoardConf.hpp"
#include "SMCE/BoardView.hpp"
#include "SMCE/Toolchain.hpp"
#include "defs.hpp"

using namespace std::literals;
constexpr std::byte operator""_b(unsigned long long c) noexcept { return static_cast<std::byte>(c); }

// TODO: Set up a library patch
// Look in smce-gd/project/share/library_patches to see how to do this correctly
// Also look in libSMCE/test/patches

TEST_CASE("Arduino_MKRRGB", "[Graphics]") {
    smce::Toolchain tc{SMCE_PATH};
    REQUIRE(!tc.check_suitable_environment());
    smce::Sketch sk{SKETCHES_PATH "mkrrgb", {
        .fqbn = "arduino:avr:nano",
        .plugins={
            {"ArduinoGraphics", "1.0.1"},
            {"Arduino_MKRRGB", "1.0.0"}
        }
    }};
    const auto ec = tc.compile(sk);
    if (ec)
        std::cerr << tc.build_log().second;
    REQUIRE_FALSE(ec);

    // TODO:
    // Start the board with one frame buffer
    // Wait a second, then check the pixels in the frame buffer
}
