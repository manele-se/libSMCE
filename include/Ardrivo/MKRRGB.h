/*
 *  MKRRGB.h
 *  
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

/* check how include Arduinographics.h correctly
 * start implementing this class in src/Ardrivo
 */
#include <cstddef>
#include <ArduinoGraphics.h>
#include "SMCE_dll.hpp"

#define RGB_MATRIX_WIDTH  12
#define RGB_MATRIX_HEIGHT 7

class SMCE__DLL_RT_API RGBMatrixClass: public ArduinoGraphics {
public:
  RGBMatrixClass();
  virtual ~RGBMatrixClass();

  int begin();
  void end();

  void brightness(uint8_t brightness);

  virtual void beginDraw();
  virtual void endDraw();

  virtual void set(int x, int y, uint8_t r, uint8_t g, uint8_t b);

private:
  uint8_t _buffer[4 + 4 * RGB_MATRIX_WIDTH * RGB_MATRIX_HEIGHT + ((RGB_MATRIX_WIDTH * RGB_MATRIX_HEIGHT + 15) / 16)];
};

extern RGBMatrixClass MATRIX;

#endif
