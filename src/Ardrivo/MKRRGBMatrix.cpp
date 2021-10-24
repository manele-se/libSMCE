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

void RGBMatrixClass::end() {
    ArduinoGraphics::end();
}

// Fortsätt här: https://github.com/arduino-libraries/Arduino_MKRRGB/blob/master/src/MKRRGBMatrix.cpp
