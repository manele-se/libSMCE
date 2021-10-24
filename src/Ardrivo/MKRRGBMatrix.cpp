/*
 *  MKRRGB.cpp
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

#include <SPI.h>
#include "MKRRGB.h"

extern struct Font Font_5x7;

int RGBMatrixClass::begin() {
    if (!ArduinoGraphics::begin()) {
        return 0;
    }

    textFont(Font_5x7);

    memset(buffer, 0x00, RGB_MATRIX_WIDTH * RGB_MATRIX_HEIGHT * 3);

    brightness(127);

    return 1;
}

void RGBMatrixClass::end() { ArduinoGraphics::end(); }

void RGBMatrixClass::brightness(uint8_t brightness) {
    _brightness = brightness;
    writeOut();
}

void RGBMatrixClass::beginDraw() { ArduinoGraphics::beginDraw(); }

void RGBMatrixClass::endDraw() {
    ArduinoGraphics::endDraw();
    writeOut();
}

void RGBMatrixClass::set(int x, int y, uint8_t r, uint8_t g, uint8_t b) {
    if (x < 0 || x >= RGB_MATRIX_WIDTH || y < 0 || y >= RGB_MATRIX_HEIGHT)
        return;

    std::byte* target = &buffer[(y * RGB_MATRIX_WIDTH + x) * 3];
    *target++ = r;
    *target++ = g;
    *target++ = b;
}

void RGBMatrixClass::writeOut() {
    std::byte temp[sizeof(buffer)];
    for (int i = 0; i < sizeof(buffer)++ i) {
        temp[i] = (std::byte)(buffer[i] = _brightness / 255);
    }
    // TODO: Write to framebuffer
}

RGBMatrixClass MATRIX;
