/*
 *  MkrRgb.cpp
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

#include <cstring>
#include <iostream>
#include <SMCE/BoardView.hpp>
#include "MkrRgb.h"

namespace smce {
extern BoardView board_view;
extern void maybe_init();
} // namespace smce

#define FRAME_BUFFER_FREQUENCY static_cast<std::uint8_t>(30)

// Constructor - called when instance is created
MkrRgb::MkrRgb() {}

// Destructor - called when instance reaches "end of life"
MkrRgb::~MkrRgb() {}

/** This method must be called before any drawing can be done
 *  Configures an SMCE frame buffer, clears the buffer
 */
int MkrRgb::begin() {
    const auto error = [=](const char* msg) {
        std::cerr << "ERROR: RGBMatrixClass::begin(): " << msg << std::endl;
        return 0;
    };

    // Get the FrameBuffer from the BoardView
    //auto fb = smce::board_view.frame_buffers[m_key];
    auto fb = smce::board_view.frame_buffers[m_key];

    // Check the FrameBuffer configuration
    if (!fb.exists())
        return error("Framebuffer does not exist");
    if (fb.direction() != smce::FrameBuffer::Direction::out)
        return error("Framebuffer not in output mode");

    // Set the dimensions and refresh frequency of the frame buffer
    fb.set_width(RGB_MATRIX_WIDTH);
    fb.set_height(RGB_MATRIX_HEIGHT);
    fb.set_freq(FRAME_BUFFER_FREQUENCY);

    // Clear all pixels (all pixels are black)
    memset(_buffer, 0x00, RGB_MATRIX_WIDTH * RGB_MATRIX_HEIGHT * 3);

    return 1;
}

/** This method can be called after the sketch is done using the MKRRGB shield
 *  This implementation resets the SMCE frame buffer
 */
void MkrRgb::end() {
    auto fb = smce::board_view.frame_buffers[m_key];

    // This implicitly tells the frame buffer to release its memory and stop working
    fb.set_width(0);
    fb.set_height(0);
    fb.set_freq(0);
}

/** This method sets the brightness (allowed values: between 0 and 255)
 *  This implementation calls writeOut to update the SMCE framebuffer
 */
void MkrRgb::brightness(uint8_t brightness) {
    _brightness = brightness;
    writeOut();
}

/** This method must be called before each "block" of drawing to a screen
 */
void MkrRgb::beginDraw() {}

/** This method must be called after each "block" of drawing to a screen, so that
 *  the screen can update with the resulting graphics.
 *  This implementation calls writeOut to update the SMCE framebuffer
 */
void MkrRgb::endDraw() { writeOut(); }

/** This method sets one pixel in the internal buffer to a new color value.
 *  This implementation uses the _buffer variable, which has 3 bytes per pixel.
 */
void MkrRgb::set(int x, int y, uint8_t r, uint8_t g, uint8_t b) {
    if (x < 0 || x >= RGB_MATRIX_WIDTH || y < 0 || y >= RGB_MATRIX_HEIGHT)
        return;
    // Find where in memory to start writing.
    uint8_t* target = &_buffer[(y * RGB_MATRIX_WIDTH + x) * 3];
    *target++ = r;
    *target++ = g;
    *target++ = b;
}

/** This method is specific to the SMCE emulation.
 *  It multiplies the written pixel color values with the current
 *  brightness, and writes to the SMCE frame buffer.
 */
void MkrRgb::writeOut() {
    std::byte temp[sizeof(_buffer)];

    // Multiply all pixel colors with the current brightness
    for (std::size_t i = 0; i < sizeof(_buffer); i++) {
        temp[i] = (std::byte)(_buffer[i] * _brightness / 255);
    }

    // Write to the frame buffer
    auto fb = smce::board_view.frame_buffers[m_key];
    fb.write_rgb888(temp);
}
