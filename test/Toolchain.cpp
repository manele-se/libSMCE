/*
 *  test/Toolchain.cpp
 *  Copyright 2020-2021 ItJustWorksTM
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
#include <filesystem>
#include <catch2/catch_test_macros.hpp>
#include "SMCE/Toolchain.hpp"
#include "defs.hpp"

TEST_CASE("Toolchain invalid", "[Toolchain]") {
    const auto path = SMCE_TEST_DIR "/empty_dir";
    std::filesystem::create_directory(path);
    smce::Toolchain tc{path};
    REQUIRE(tc.check_suitable_environment());
    REQUIRE(tc.resource_dir() == path);
}

TEST_CASE("Toolchain valid", "[Toolchain]") {
    smce::Toolchain tc{SMCE_PATH};
    REQUIRE(!tc.check_suitable_environment());
    REQUIRE(tc.resource_dir() == SMCE_PATH);
    REQUIRE_FALSE(tc.cmake_path().empty());
}

TEST_CASE("Toolchain invalid", "[Toolchain]") {
    const auto path = SMCE_TEST_DIR "/epty_dir";
    std::filesystem::create_directory(path);
    smce::Toolchain tc{path};
    REQUIRE(tc.check_suitable_environment());
    REQUIRE(tc.resource_dir() == path);
}

// changed the name of plugin, this system do not allow plugin name including '/'
TEST_CASE("Toolchain invalid plugin name", "[Toolchain]") {
    smce::Toolchain tc{SMCE_PATH};
    REQUIRE(!tc.check_suitable_environment());
    smce::PluginManifest esp32awpm{
        "ESP32/AnalogWrite",
        "0.2",
        {},
        {},
        "https://github.com/ERROPiX/ESP32_AnalogWrite/archive/refs/tags/0.2.zip",
        "file://" PATCHES_PATH "ESP32_analogRewrite",
        smce::PluginManifest::Defaults::arduino,
        {},
        {},
        {},
        {}
    };

    smce::SketchConfig skc{
        "arduino:avr:nano",
        {},
        { smce::SketchConfig::ArduinoLibrary{"ESP32 AnalogWrite"} },
        { std::move(esp32aw_pm) }
    };
    // clang-format on
    smce::Sketch sk{SKETCHES_PATH "patch", std::move(skc)};
    const auto ec = tc.compile(sk);
    REQUIRE(ec == smce::toolchain_error::invalid_plugin_name);
}

// changed the url of plugin - build fail
TEST_CASE("Toolchain build failed", "[Toolchain]") {
    smce::Toolchain tc{SMCE_PATH};
    REQUIRE(!tc.check_suitable_environment());
    smce::PluginManifest esp32aw_pm{
        "ESP32_AnalogWrite",
        "0.2",
        {},
        {},
        "https://github.com/ERROPiX/ESP32_AnalogWrite/armchive/refs/tags/0.2.zip",
        "file://" PATCHES_PATH "ESP32_analogRewrite",
        smce::PluginManifest::Defaults::arduino,
        {},
        {},
        {},
        {}
    };

    smce::SketchConfig skc{
        "arduino:avr:nano",
        {},
        { smce::SketchConfig::ArduinoLibrary{"ESP32 AnalogWrite"} },
        { std::move(esp32aw_pm) }
    };
    // clang-format on
    smce::Sketch sk{SKETCHES_PATH "patch", std::move(skc)};
    const auto ec = tc.compile(sk);
    REQUIRE(ec == smce::toolchain_error::build_failed);
}