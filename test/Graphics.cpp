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
    smce::SketchConfig sketchConfig{
        .fqbn = "arduino:avr:nano",
        .plugins = {smce::PluginManifest{
                        .name = "ArduinoGraphics",
                        .version = "1.0.0",
                        .uri = "https://github.com/arduino-libraries/ArduinoGraphics/archive/refs/tags/1.0.0.tar.gz",
                        .defaults = smce::PluginManifest::Defaults::arduino},
                    smce::PluginManifest{
                        .name = "Arduino_MKRRGB",
                        .version = "1.0.0",
                        .uri = "https://github.com/arduino-libraries/Arduino_MKRRGB/archive/refs/tags/1.0.0.tar.gz",
                        .patch_uri = "file://" PATCHES_PATH "arduino_mkrrgb",
                        .defaults = smce::PluginManifest::Defaults::arduino}}};
    smce::Sketch sketch{SKETCHES_PATH "mkrrgb", sketchConfig};
    const auto ec = tc.compile(sketch);
    if (ec)
        std::cerr << tc.build_log().second;
    REQUIRE_FALSE(ec);

    smce::Board board;
    REQUIRE(board.attach_sketch(sketch));

    smce::BoardConfig::FrameBuffer mkrrgb_fb{1, smce::BoardConfig::FrameBuffer::Direction::out};
    smce::BoardConfig board_conf{// Set the direction to "out" for frame buffer with index 1
                                 .frame_buffers = {{}, mkrrgb_fb}};

    REQUIRE(board.configure(std::move(board_conf)));

    REQUIRE(board.start());

    // wait a little
    std::this_thread::sleep_for(1000ms);

    // Read pixels from frame buffer
    auto board_view = board.view();
    auto fbuf = board_view.frame_buffers[1];
    REQUIRE(fbuf.exists());
    std::array<std::byte, 12 * 7 * 3> target;
    fbuf.read_rgb888(target);

    // These pixels should be white: (0,0), (1,3), (4,5)
    // All other pixels should be black

    // clang-format off
    constexpr std::array expected = {
        255_b,255_b,255_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b,
        0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b,
        0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b,
        0_b,0_b,0_b, 255_b,255_b,255_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b,
        0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b,
        0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 255_b,255_b,255_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b,
        0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b, 0_b,0_b,0_b
    };
    // clang-format on

    // Checking (0,0)
    REQUIRE(target == expected);

    REQUIRE(board.stop());
}
