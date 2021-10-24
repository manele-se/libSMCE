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

#include <iostream>
#include <SMCE/BoardView.hpp>
#include "MKRRGBMatrix.h"

namespace smce {
extern BoardView board_view;
extern void maybe_init();
} // namespace smce

#define FRAME_BUFFER_FREQUENCY static_cast<std::uint8_t>(30)

RGBMatrixClass::RGBMatrixClass() : ArduinoGraphics(RGB_MATRIX_WIDTH, RGB_MATRIX_HEIGHT) {}

RGBMatrixClass::~RGBMatrixClass() {}

// This method must be called before any drawing can be done
// This implementation checks and configures an SMCE frame buffer, and
// clears the buffer, and sets the brightness to 127 (half brightness)
int RGBMatrixClass::begin() {
    const auto error = [=](const char* msg) {
        std::cerr << "ERROR: RGBMatrixClass::begin(): " << msg << std::endl;
        return 0;
    };

    auto fb = smce::board_view.frame_buffers[m_key];

    if (!fb.exists())
        return error("Framebuffer does not exist");
    if (fb.direction() != smce::FrameBuffer::Direction::out)
        return error("Framebuffer not in output mode");

    fb.set_width(RGB_MATRIX_WIDTH);
    fb.set_height(RGB_MATRIX_HEIGHT);
    fb.set_freq(FRAME_BUFFER_FREQUENCY);

    if (!ArduinoGraphics::begin()) {
        return 0;
    }

    textFont(Font_5x7);

    memset(_buffer, 0x00, RGB_MATRIX_WIDTH * RGB_MATRIX_HEIGHT * 3);

    brightness(127);

    return 1;
}

// This method can be called after the sketch is done using the MKRRGB shield
// This implementation resets the SMCE frame buffer
void RGBMatrixClass::end() {
    ArduinoGraphics::end();

    auto fb = smce::board_view.frame_buffers[m_key];

    fb.set_width(0);
    fb.set_height(0);
    fb.set_freq(0);
}

// This method sets the brightness (allowed values: between 0 and 255)
// This implementation calls writeOut to update the SMCE framebuffer
void RGBMatrixClass::brightness(uint8_t brightness) {
    _brightness = brightness;
    writeOut();
}

// This method must be called before each "block" of drawing to a screen
void RGBMatrixClass::beginDraw() { ArduinoGraphics::beginDraw(); }

// This method must be called after each "block" of drawing to a screen, so that
// the screen can update with the resulting graphics.
// This implementation calls writeOut to update the SMCE framebuffer
void RGBMatrixClass::endDraw() {
    ArduinoGraphics::endDraw();
    writeOut();
}

// This method sets one pixel in the internal buffer to a new color value.
// This implementation uses the _buffer variable, which has 3 bytes per pixel.
void RGBMatrixClass::set(int x, int y, uint8_t r, uint8_t g, uint8_t b) {
    if (x < 0 || x >= RGB_MATRIX_WIDTH || y < 0 || y >= RGB_MATRIX_HEIGHT)
        return;

    // Find where in memory to start writing.
    uint8_t* target = &_buffer[(y * RGB_MATRIX_WIDTH + x) * 3];
    *target++ = r;
    *target++ = g;
    *target++ = b;
}

// This method is specific to the SMCE emulation.
// It multiplies the written pixel color values with the current
// brightness, and writes to the SMCE frame buffer.
void RGBMatrixClass::writeOut() {
    std::byte temp[sizeof(_buffer)];
    for (std::size_t i = 0; i < sizeof(_buffer); i++) {
        temp[i] = (std::byte)(_buffer[i] * _brightness / 255);
    }

    auto fb = smce::board_view.frame_buffers[m_key];
    fb.write_rgb888(temp);
}

SMCE__DLL_API RGBMatrixClass MATRIX;
