/*
 *  MKRRGB.h
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

#ifndef MKRRGB_H
#define MKRRGB_H

#include <cstddef>
#include "SMCE_dll.hpp"

#ifndef RGB_MATRIX_WIDTH
#define RGB_MATRIX_WIDTH 12
#define RGB_MATRIX_HEIGHT 7
#endif // RGB_MATRIX_WIDTH

class SMCE__DLL_RT_API MkrRgb {
  public:
    MkrRgb();
    ~MkrRgb();

    int begin();
    void end();

    void brightness(uint8_t brightness);

    void beginDraw();
    void endDraw();

    void set(int x, int y, uint8_t r, uint8_t g, uint8_t b);

  private:
    std::size_t m_key = 1;
    uint8_t _buffer[RGB_MATRIX_WIDTH * RGB_MATRIX_HEIGHT * 3];
    uint8_t _brightness;

    void writeOut();
};

#endif
