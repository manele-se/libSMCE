#
#  extra/stduart/CMakeLists.txt
#  Copyright 2021 ItJustWorksTM
#
#  Licensed under the Apache License, Version 2.0 (the "License");
#  you may not use this file except in compliance with the License.
#  You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
#  Unless required by applicable law or agreed to in writing, software
#  distributed under the License is distributed on an "AS IS" BASIS,
#  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#  See the License for the specific language governing permissions and
#  limitations under the License.
#

cmake_minimum_required (VERSION 3.16)
project (mkrrgb)

message(STATUS "CMAKE_CURRENT_SOURCE_DIR=${CMAKE_CURRENT_SOURCE_DIR}")

find_package (Threads REQUIRED)
find_package (SMCE REQUIRED PATH ${CMAKE_CURRENT_SOURCE_DIR}/../../../)

set (SMCE_RES "${PROJECT_BINARY_DIR}/SMCE_Res")

add_executable (mkrrgb main.cpp)
target_link_libraries (mkrrgb PRIVATE SMCE::SMCE)
target_compile_definitions (mkrrgb PRIVATE "SMCE_RESOURCES_DIR=\"${SMCE_RES}\"")
file (MAKE_DIRECTORY "${SMCE_RES}")
execute_process (COMMAND "${CMAKE_COMMAND}" -E tar xf "${SMCE_RESOURCES_ARK}"
                 WORKING_DIRECTORY "${SMCE_RES}")
file (COPY sketches DESTINATION .)
file (COPY library_patches DESTINATION .)
