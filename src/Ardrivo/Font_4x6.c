/*
  This file is part of the ArduinoGraphics library.
  Copyright (c) 2019 Arduino SA. All rights reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include "Font.h"

const struct Font Font_4x6 = {4, 6,
                              (const uint8_t*[]){
                                  // char0
                                  (const uint8_t[]){
                                      0xa0,
                                      0x00,
                                      0xa0,
                                      0x00,
                                      0xa0,
                                      0x00,
                                  },
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  // space
                                  (const uint8_t[]){
                                      0x00,
                                      0x00,
                                      0x00,
                                      0x00,
                                      0x00,
                                      0x00,
                                  },
                                  // exclam
                                  (const uint8_t[]){
                                      0x40,
                                      0x40,
                                      0x40,
                                      0x00,
                                      0x40,
                                      0x00,
                                  },
                                  // quotedbl
                                  (const uint8_t[]){
                                      0xa0,
                                      0xa0,
                                      0x00,
                                      0x00,
                                      0x00,
                                      0x00,
                                  },
                                  // numbersign
                                  (const uint8_t[]){
                                      0xa0,
                                      0xf0,
                                      0xa0,
                                      0xf0,
                                      0xa0,
                                      0x00,
                                  },
                                  // dollar
                                  (const uint8_t[]){
                                      0x40,
                                      0xe0,
                                      0xc0,
                                      0x20,
                                      0xe0,
                                      0x40,
                                  },
                                  // percent
                                  (const uint8_t[]){
                                      0x80,
                                      0x20,
                                      0x40,
                                      0x80,
                                      0x20,
                                      0x00,
                                  },
                                  // ampersand
                                  (const uint8_t[]){
                                      0x40,
                                      0xa0,
                                      0x40,
                                      0xa0,
                                      0x50,
                                      0x00,
                                  },
                                  // quotesingle
                                  (const uint8_t[]){
                                      0x40,
                                      0x40,
                                      0x00,
                                      0x00,
                                      0x00,
                                      0x00,
                                  },
                                  // parenleft
                                  (const uint8_t[]){
                                      0x20,
                                      0x40,
                                      0x40,
                                      0x40,
                                      0x40,
                                      0x20,
                                  },
                                  // parenright
                                  (const uint8_t[]){
                                      0x80,
                                      0x40,
                                      0x40,
                                      0x40,
                                      0x40,
                                      0x80,
                                  },
                                  // asterisk
                                  (const uint8_t[]){
                                      0xa0,
                                      0x40,
                                      0xe0,
                                      0x40,
                                      0xa0,
                                      0x00,
                                  },
                                  // plus
                                  (const uint8_t[]){
                                      0x40,
                                      0x40,
                                      0xe0,
                                      0x40,
                                      0x40,
                                      0x00,
                                  },
                                  // comma
                                  (const uint8_t[]){
                                      0x00,
                                      0x00,
                                      0x00,
                                      0x00,
                                      0x40,
                                      0x80,
                                  },
                                  // hyphen
                                  (const uint8_t[]){
                                      0x00,
                                      0x00,
                                      0xe0,
                                      0x00,
                                      0x00,
                                      0x00,
                                  },
                                  // period
                                  (const uint8_t[]){
                                      0x00,
                                      0x00,
                                      0x00,
                                      0x00,
                                      0x40,
                                      0x00,
                                  },
                                  // slash
                                  (const uint8_t[]){
                                      0x20,
                                      0x20,
                                      0x40,
                                      0x80,
                                      0x80,
                                      0x00,
                                  },
                                  // zero
                                  (const uint8_t[]){
                                      0x40,
                                      0xa0,
                                      0xe0,
                                      0xa0,
                                      0x40,
                                      0x00,
                                  },
                                  // one
                                  (const uint8_t[]){
                                      0x40,
                                      0xc0,
                                      0x40,
                                      0x40,
                                      0xe0,
                                      0x00,
                                  },
                                  // two
                                  (const uint8_t[]){
                                      0x40,
                                      0xa0,
                                      0x20,
                                      0x40,
                                      0xe0,
                                      0x00,
                                  },
                                  // three
                                  (const uint8_t[]){
                                      0xe0,
                                      0x20,
                                      0x40,
                                      0x20,
                                      0xc0,
                                      0x00,
                                  },
                                  // four
                                  (const uint8_t[]){
                                      0xa0,
                                      0xa0,
                                      0xe0,
                                      0x20,
                                      0x20,
                                      0x00,
                                  },
                                  // five
                                  (const uint8_t[]){
                                      0xe0,
                                      0x80,
                                      0xc0,
                                      0x20,
                                      0xc0,
                                      0x00,
                                  },
                                  // six
                                  (const uint8_t[]){
                                      0x60,
                                      0x80,
                                      0xc0,
                                      0xa0,
                                      0x40,
                                      0x00,
                                  },
                                  // seven
                                  (const uint8_t[]){
                                      0xe0,
                                      0x20,
                                      0x40,
                                      0x80,
                                      0x80,
                                      0x00,
                                  },
                                  // eight
                                  (const uint8_t[]){
                                      0x60,
                                      0xa0,
                                      0x40,
                                      0xa0,
                                      0xc0,
                                      0x00,
                                  },
                                  // nine
                                  (const uint8_t[]){
                                      0x40,
                                      0xa0,
                                      0x60,
                                      0x20,
                                      0xc0,
                                      0x00,
                                  },
                                  // colon
                                  (const uint8_t[]){
                                      0x00,
                                      0x40,
                                      0x00,
                                      0x00,
                                      0x40,
                                      0x00,
                                  },
                                  // semicolon
                                  (const uint8_t[]){
                                      0x00,
                                      0x40,
                                      0x00,
                                      0x00,
                                      0x40,
                                      0x80,
                                  },
                                  // less
                                  (const uint8_t[]){
                                      0x20,
                                      0x40,
                                      0x80,
                                      0x40,
                                      0x20,
                                      0x00,
                                  },
                                  // equal
                                  (const uint8_t[]){
                                      0x00,
                                      0xe0,
                                      0x00,
                                      0xe0,
                                      0x00,
                                      0x00,
                                  },
                                  // greater
                                  (const uint8_t[]){
                                      0x80,
                                      0x40,
                                      0x20,
                                      0x40,
                                      0x80,
                                      0x00,
                                  },
                                  // question
                                  (const uint8_t[]){
                                      0xc0,
                                      0x20,
                                      0x40,
                                      0x00,
                                      0x40,
                                      0x00,
                                  },
                                  // at
                                  (const uint8_t[]){
                                      0x60,
                                      0xa0,
                                      0xa0,
                                      0x80,
                                      0x60,
                                      0x00,
                                  },
                                  // A
                                  (const uint8_t[]){
                                      0x40,
                                      0xa0,
                                      0xe0,
                                      0xa0,
                                      0xa0,
                                      0x00,
                                  },
                                  // B
                                  (const uint8_t[]){
                                      0xc0,
                                      0xa0,
                                      0xc0,
                                      0xa0,
                                      0xc0,
                                      0x00,
                                  },
                                  // C
                                  (const uint8_t[]){
                                      0x40,
                                      0xa0,
                                      0x80,
                                      0xa0,
                                      0x40,
                                      0x00,
                                  },
                                  // D
                                  (const uint8_t[]){
                                      0xc0,
                                      0xa0,
                                      0xa0,
                                      0xa0,
                                      0xc0,
                                      0x00,
                                  },
                                  // E
                                  (const uint8_t[]){
                                      0xe0,
                                      0x80,
                                      0xc0,
                                      0x80,
                                      0xe0,
                                      0x00,
                                  },
                                  // F
                                  (const uint8_t[]){
                                      0xe0,
                                      0x80,
                                      0xc0,
                                      0x80,
                                      0x80,
                                      0x00,
                                  },
                                  // G
                                  (const uint8_t[]){
                                      0x60,
                                      0x80,
                                      0xa0,
                                      0xa0,
                                      0x60,
                                      0x00,
                                  },
                                  // H
                                  (const uint8_t[]){
                                      0xa0,
                                      0xa0,
                                      0xe0,
                                      0xa0,
                                      0xa0,
                                      0x00,
                                  },
                                  // I
                                  (const uint8_t[]){
                                      0xe0,
                                      0x40,
                                      0x40,
                                      0x40,
                                      0xe0,
                                      0x00,
                                  },
                                  // J
                                  (const uint8_t[]){
                                      0x20,
                                      0x20,
                                      0x20,
                                      0xa0,
                                      0x40,
                                      0x00,
                                  },
                                  // K
                                  (const uint8_t[]){
                                      0xa0,
                                      0xa0,
                                      0xc0,
                                      0xa0,
                                      0xa0,
                                      0x00,
                                  },
                                  // L
                                  (const uint8_t[]){
                                      0x80,
                                      0x80,
                                      0x80,
                                      0x80,
                                      0xe0,
                                      0x00,
                                  },
                                  // M
                                  (const uint8_t[]){
                                      0xa0,
                                      0xe0,
                                      0xe0,
                                      0xa0,
                                      0xa0,
                                      0x00,
                                  },
                                  // N
                                  (const uint8_t[]){
                                      0x20,
                                      0xa0,
                                      0xe0,
                                      0xa0,
                                      0x80,
                                      0x00,
                                  },
                                  // O
                                  (const uint8_t[]){
                                      0x40,
                                      0xa0,
                                      0xa0,
                                      0xa0,
                                      0x40,
                                      0x00,
                                  },
                                  // P
                                  (const uint8_t[]){
                                      0xc0,
                                      0xa0,
                                      0xc0,
                                      0x80,
                                      0x80,
                                      0x00,
                                  },
                                  // Q
                                  (const uint8_t[]){
                                      0x40,
                                      0xa0,
                                      0xa0,
                                      0xa0,
                                      0x40,
                                      0x20,
                                  },
                                  // R
                                  (const uint8_t[]){
                                      0xc0,
                                      0xa0,
                                      0xc0,
                                      0xa0,
                                      0xa0,
                                      0x00,
                                  },
                                  // S
                                  (const uint8_t[]){
                                      0x60,
                                      0x80,
                                      0x40,
                                      0x20,
                                      0xc0,
                                      0x00,
                                  },
                                  // T
                                  (const uint8_t[]){
                                      0xe0,
                                      0x40,
                                      0x40,
                                      0x40,
                                      0x40,
                                      0x00,
                                  },
                                  // U
                                  (const uint8_t[]){
                                      0xa0,
                                      0xa0,
                                      0xa0,
                                      0xa0,
                                      0xe0,
                                      0x00,
                                  },
                                  // V
                                  (const uint8_t[]){
                                      0xa0,
                                      0xa0,
                                      0xa0,
                                      0xe0,
                                      0x40,
                                      0x00,
                                  },
                                  // W
                                  (const uint8_t[]){
                                      0xa0,
                                      0xa0,
                                      0xe0,
                                      0xe0,
                                      0xa0,
                                      0x00,
                                  },
                                  // X
                                  (const uint8_t[]){
                                      0xa0,
                                      0xa0,
                                      0x40,
                                      0xa0,
                                      0xa0,
                                      0x00,
                                  },
                                  // Y
                                  (const uint8_t[]){
                                      0xa0,
                                      0xa0,
                                      0x40,
                                      0x40,
                                      0x40,
                                      0x00,
                                  },
                                  // Z
                                  (const uint8_t[]){
                                      0xe0,
                                      0x20,
                                      0x40,
                                      0x80,
                                      0xe0,
                                      0x00,
                                  },
                                  // bracketleft
                                  (const uint8_t[]){
                                      0x60,
                                      0x40,
                                      0x40,
                                      0x40,
                                      0x60,
                                      0x00,
                                  },
                                  // backslash
                                  (const uint8_t[]){
                                      0x80,
                                      0x80,
                                      0x40,
                                      0x20,
                                      0x20,
                                      0x00,
                                  },
                                  // bracketright
                                  (const uint8_t[]){
                                      0xc0,
                                      0x40,
                                      0x40,
                                      0x40,
                                      0xc0,
                                      0x00,
                                  },
                                  // asciicircum
                                  (const uint8_t[]){
                                      0x40,
                                      0xa0,
                                      0x00,
                                      0x00,
                                      0x00,
                                      0x00,
                                  },
                                  // underscore
                                  (const uint8_t[]){
                                      0x00,
                                      0x00,
                                      0x00,
                                      0x00,
                                      0x00,
                                      0xe0,
                                  },
                                  // grave
                                  (const uint8_t[]){
                                      0x40,
                                      0x20,
                                      0x00,
                                      0x00,
                                      0x00,
                                      0x00,
                                  },
                                  // a
                                  (const uint8_t[]){
                                      0x00,
                                      0x60,
                                      0xa0,
                                      0xa0,
                                      0x60,
                                      0x00,
                                  },
                                  // b
                                  (const uint8_t[]){
                                      0x80,
                                      0xc0,
                                      0xa0,
                                      0xa0,
                                      0xc0,
                                      0x00,
                                  },
                                  // c
                                  (const uint8_t[]){
                                      0x00,
                                      0x60,
                                      0x80,
                                      0x80,
                                      0x60,
                                      0x00,
                                  },
                                  // d
                                  (const uint8_t[]){
                                      0x20,
                                      0x60,
                                      0xa0,
                                      0xa0,
                                      0x60,
                                      0x00,
                                  },
                                  // e
                                  (const uint8_t[]){
                                      0x00,
                                      0x40,
                                      0xa0,
                                      0xc0,
                                      0x60,
                                      0x00,
                                  },
                                  // f
                                  (const uint8_t[]){
                                      0x20,
                                      0x40,
                                      0xe0,
                                      0x40,
                                      0x40,
                                      0x00,
                                  },
                                  // g
                                  (const uint8_t[]){
                                      0x00,
                                      0x60,
                                      0xa0,
                                      0x60,
                                      0x20,
                                      0xc0,
                                  },
                                  // h
                                  (const uint8_t[]){
                                      0x80,
                                      0xc0,
                                      0xa0,
                                      0xa0,
                                      0xa0,
                                      0x00,
                                  },
                                  // i
                                  (const uint8_t[]){
                                      0x40,
                                      0x00,
                                      0xc0,
                                      0x40,
                                      0xe0,
                                      0x00,
                                  },
                                  // j
                                  (const uint8_t[]){
                                      0x20,
                                      0x00,
                                      0x20,
                                      0x20,
                                      0x20,
                                      0xc0,
                                  },
                                  // k
                                  (const uint8_t[]){
                                      0x80,
                                      0xa0,
                                      0xc0,
                                      0xa0,
                                      0xa0,
                                      0x00,
                                  },
                                  // l
                                  (const uint8_t[]){
                                      0xc0,
                                      0x40,
                                      0x40,
                                      0x40,
                                      0xe0,
                                      0x00,
                                  },
                                  // m
                                  (const uint8_t[]){
                                      0x00,
                                      0xa0,
                                      0xe0,
                                      0xa0,
                                      0xa0,
                                      0x00,
                                  },
                                  // n
                                  (const uint8_t[]){
                                      0x00,
                                      0xc0,
                                      0xa0,
                                      0xa0,
                                      0xa0,
                                      0x00,
                                  },
                                  // o
                                  (const uint8_t[]){
                                      0x00,
                                      0x40,
                                      0xa0,
                                      0xa0,
                                      0x40,
                                      0x00,
                                  },
                                  // p
                                  (const uint8_t[]){
                                      0x00,
                                      0xc0,
                                      0xa0,
                                      0xc0,
                                      0x80,
                                      0x80,
                                  },
                                  // q
                                  (const uint8_t[]){
                                      0x00,
                                      0x60,
                                      0xa0,
                                      0xa0,
                                      0x60,
                                      0x20,
                                  },
                                  // r
                                  (const uint8_t[]){
                                      0x00,
                                      0xa0,
                                      0xc0,
                                      0x80,
                                      0x80,
                                      0x00,
                                  },
                                  // s
                                  (const uint8_t[]){
                                      0x00,
                                      0x60,
                                      0xc0,
                                      0x20,
                                      0xc0,
                                      0x00,
                                  },
                                  // t
                                  (const uint8_t[]){
                                      0x40,
                                      0xe0,
                                      0x40,
                                      0x40,
                                      0x20,
                                      0x00,
                                  },
                                  // u
                                  (const uint8_t[]){
                                      0x00,
                                      0xa0,
                                      0xa0,
                                      0xa0,
                                      0x60,
                                      0x00,
                                  },
                                  // v
                                  (const uint8_t[]){
                                      0x00,
                                      0xa0,
                                      0xa0,
                                      0xa0,
                                      0x40,
                                      0x00,
                                  },
                                  // w
                                  (const uint8_t[]){
                                      0x00,
                                      0xa0,
                                      0xa0,
                                      0xe0,
                                      0xa0,
                                      0x00,
                                  },
                                  // x
                                  (const uint8_t[]){
                                      0x00,
                                      0xa0,
                                      0x40,
                                      0x40,
                                      0xa0,
                                      0x00,
                                  },
                                  // y
                                  (const uint8_t[]){
                                      0x00,
                                      0xa0,
                                      0xa0,
                                      0x60,
                                      0x20,
                                      0xc0,
                                  },
                                  // z
                                  (const uint8_t[]){
                                      0x00,
                                      0xe0,
                                      0x20,
                                      0x40,
                                      0xe0,
                                      0x00,
                                  },
                                  // braceleft
                                  (const uint8_t[]){
                                      0x20,
                                      0x40,
                                      0xc0,
                                      0x40,
                                      0x40,
                                      0x20,
                                  },
                                  // bar
                                  (const uint8_t[]){
                                      0x40,
                                      0x40,
                                      0x40,
                                      0x40,
                                      0x40,
                                      0x00,
                                  },
                                  // braceright
                                  (const uint8_t[]){
                                      0x80,
                                      0x40,
                                      0x60,
                                      0x40,
                                      0x40,
                                      0x80,
                                  },
                                  // asciitilde
                                  (const uint8_t[]){
                                      0x50,
                                      0xa0,
                                      0x00,
                                      0x00,
                                      0x00,
                                      0x00,
                                  },
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  NULL,
                                  // space
                                  (const uint8_t[]){
                                      0x00,
                                      0x00,
                                      0x00,
                                      0x00,
                                      0x00,
                                      0x00,
                                  },
                                  // exclamdown
                                  (const uint8_t[]){
                                      0x40,
                                      0x00,
                                      0x40,
                                      0x40,
                                      0x40,
                                      0x00,
                                  },
                                  // cent
                                  (const uint8_t[]){
                                      0x40,
                                      0xe0,
                                      0x80,
                                      0xe0,
                                      0x40,
                                      0x00,
                                  },
                                  // sterling
                                  (const uint8_t[]){
                                      0x20,
                                      0x40,
                                      0x60,
                                      0x40,
                                      0xa0,
                                      0x00,
                                  },
                                  // currency
                                  (const uint8_t[]){
                                      0x00,
                                      0x90,
                                      0x60,
                                      0x60,
                                      0x90,
                                      0x00,
                                  },
                                  // yen
                                  (const uint8_t[]){
                                      0xa0,
                                      0x40,
                                      0xe0,
                                      0x40,
                                      0x40,
                                      0x00,
                                  },
                                  // brokenbar
                                  (const uint8_t[]){
                                      0x40,
                                      0x40,
                                      0x00,
                                      0x40,
                                      0x40,
                                      0x00,
                                  },
                                  // section
                                  (const uint8_t[]){
                                      0x60,
                                      0xc0,
                                      0xa0,
                                      0x60,
                                      0x20,
                                      0xc0,
                                  },
                                  // dieresis
                                  (const uint8_t[]){
                                      0xa0,
                                      0x00,
                                      0x00,
                                      0x00,
                                      0x00,
                                      0x00,
                                  },
                                  // copyright
                                  (const uint8_t[]){
                                      0x60,
                                      0x90,
                                      0xd0,
                                      0xd0,
                                      0x90,
                                      0x60,
                                  },
                                  // ordfeminine
                                  (const uint8_t[]){
                                      0x60,
                                      0xa0,
                                      0x60,
                                      0x00,
                                      0xe0,
                                      0x00,
                                  },
                                  // guillemotleft
                                  (const uint8_t[]){
                                      0x00,
                                      0x50,
                                      0xa0,
                                      0x50,
                                      0x00,
                                      0x00,
                                  },
                                  // logicalnot
                                  (const uint8_t[]){
                                      0x00,
                                      0x00,
                                      0xe0,
                                      0x20,
                                      0x00,
                                      0x00,
                                  },
                                  // hyphen
                                  (const uint8_t[]){
                                      0x00,
                                      0x00,
                                      0xe0,
                                      0x00,
                                      0x00,
                                      0x00,
                                  },
                                  // registered
                                  (const uint8_t[]){
                                      0x60,
                                      0xf0,
                                      0xd0,
                                      0x60,
                                      0x00,
                                      0x00,
                                  },
                                  // macron
                                  (const uint8_t[]){
                                      0xe0,
                                      0x00,
                                      0x00,
                                      0x00,
                                      0x00,
                                      0x00,
                                  },
                                  // degree
                                  (const uint8_t[]){
                                      0x40,
                                      0xa0,
                                      0x40,
                                      0x00,
                                      0x00,
                                      0x00,
                                  },
                                  // plusminus
                                  (const uint8_t[]){
                                      0x40,
                                      0xe0,
                                      0x40,
                                      0x00,
                                      0xe0,
                                      0x00,
                                  },
                                  // twosuperior
                                  (const uint8_t[]){
                                      0xc0,
                                      0x40,
                                      0x80,
                                      0xc0,
                                      0x00,
                                      0x00,
                                  },
                                  // threesuperior
                                  (const uint8_t[]){
                                      0xc0,
                                      0x40,
                                      0x80,
                                      0x40,
                                      0x80,
                                      0x00,
                                  },
                                  // acute
                                  (const uint8_t[]){
                                      0x20,
                                      0x40,
                                      0x00,
                                      0x00,
                                      0x00,
                                      0x00,
                                  },
                                  // mu
                                  (const uint8_t[]){
                                      0x00,
                                      0xa0,
                                      0xa0,
                                      0xa0,
                                      0xc0,
                                      0x80,
                                  },
                                  // paragraph
                                  (const uint8_t[]){
                                      0x70,
                                      0xd0,
                                      0xd0,
                                      0x50,
                                      0x50,
                                      0x00,
                                  },
                                  // periodcentered
                                  (const uint8_t[]){
                                      0x00,
                                      0x00,
                                      0x40,
                                      0x00,
                                      0x00,
                                      0x00,
                                  },
                                  // cedilla
                                  (const uint8_t[]){
                                      0x00,
                                      0x00,
                                      0x00,
                                      0x20,
                                      0x40,
                                      0x00,
                                  },
                                  // onesuperior
                                  (const uint8_t[]){
                                      0x40,
                                      0xc0,
                                      0x40,
                                      0x40,
                                      0x00,
                                      0x00,
                                  },
                                  // ordmasculine
                                  (const uint8_t[]){
                                      0x40,
                                      0xa0,
                                      0x40,
                                      0x00,
                                      0xe0,
                                      0x00,
                                  },
                                  // guillemotright
                                  (const uint8_t[]){
                                      0x00,
                                      0xa0,
                                      0x50,
                                      0xa0,
                                      0x00,
                                      0x00,
                                  },
                                  // onequarter
                                  (const uint8_t[]){
                                      0x80,
                                      0x80,
                                      0x80,
                                      0x50,
                                      0x70,
                                      0x10,
                                  },
                                  // onehalf
                                  (const uint8_t[]){
                                      0x80,
                                      0x80,
                                      0xb0,
                                      0x10,
                                      0x20,
                                      0x30,
                                  },
                                  // threequarters
                                  (const uint8_t[]){
                                      0xc0,
                                      0x40,
                                      0x80,
                                      0x50,
                                      0xb0,
                                      0x10,
                                  },
                                  // questiondown
                                  (const uint8_t[]){
                                      0x40,
                                      0x00,
                                      0x40,
                                      0x80,
                                      0x60,
                                      0x00,
                                  },
                                  // Agrave
                                  (const uint8_t[]){
                                      0x80,
                                      0x40,
                                      0xa0,
                                      0xe0,
                                      0xa0,
                                      0x00,
                                  },
                                  // Aacute
                                  (const uint8_t[]){
                                      0x20,
                                      0x40,
                                      0xa0,
                                      0xe0,
                                      0xa0,
                                      0x00,
                                  },
                                  // Acircumflex
                                  (const uint8_t[]){
                                      0xc0,
                                      0x40,
                                      0xa0,
                                      0xe0,
                                      0xa0,
                                      0x00,
                                  },
                                  // Atilde
                                  (const uint8_t[]){
                                      0x60,
                                      0xc0,
                                      0xa0,
                                      0xe0,
                                      0xa0,
                                      0x00,
                                  },
                                  // Adieresis
                                  (const uint8_t[]){
                                      0xa0,
                                      0x40,
                                      0xa0,
                                      0xe0,
                                      0xa0,
                                      0x00,
                                  },
                                  // Aring
                                  (const uint8_t[]){
                                      0x40,
                                      0x40,
                                      0xa0,
                                      0xe0,
                                      0xa0,
                                      0x00,
                                  },
                                  // AE
                                  (const uint8_t[]){
                                      0x70,
                                      0xa0,
                                      0xf0,
                                      0xa0,
                                      0xb0,
                                      0x00,
                                  },
                                  // Ccedilla
                                  (const uint8_t[]){
                                      0x40,
                                      0xa0,
                                      0x80,
                                      0xa0,
                                      0x40,
                                      0x80,
                                  },
                                  // Egrave
                                  (const uint8_t[]){
                                      0x80,
                                      0xe0,
                                      0xc0,
                                      0x80,
                                      0xe0,
                                      0x00,
                                  },
                                  // Eacute
                                  (const uint8_t[]){
                                      0x20,
                                      0xe0,
                                      0xc0,
                                      0x80,
                                      0xe0,
                                      0x00,
                                  },
                                  // Ecircumflex
                                  (const uint8_t[]){
                                      0x60,
                                      0xe0,
                                      0xc0,
                                      0x80,
                                      0xe0,
                                      0x00,
                                  },
                                  // Edieresis
                                  (const uint8_t[]){
                                      0xa0,
                                      0xe0,
                                      0xc0,
                                      0x80,
                                      0xe0,
                                      0x00,
                                  },
                                  // Igrave
                                  (const uint8_t[]){
                                      0x80,
                                      0xe0,
                                      0x40,
                                      0x40,
                                      0xe0,
                                      0x00,
                                  },
                                  // Iacute
                                  (const uint8_t[]){
                                      0x20,
                                      0xe0,
                                      0x40,
                                      0x40,
                                      0xe0,
                                      0x00,
                                  },
                                  // Icircumflex
                                  (const uint8_t[]){
                                      0x40,
                                      0xe0,
                                      0x40,
                                      0x40,
                                      0xe0,
                                      0x00,
                                  },
                                  // Idieresis
                                  (const uint8_t[]){
                                      0xa0,
                                      0x40,
                                      0x40,
                                      0x40,
                                      0xe0,
                                      0x00,
                                  },
                                  // Eth
                                  (const uint8_t[]){
                                      0xe0,
                                      0x50,
                                      0xd0,
                                      0x50,
                                      0xe0,
                                      0x00,
                                  },
                                  // Ntilde
                                  (const uint8_t[]){
                                      0x50,
                                      0xa0,
                                      0xe0,
                                      0xe0,
                                      0xa0,
                                      0x00,
                                  },
                                  // Ograve
                                  (const uint8_t[]){
                                      0x80,
                                      0x40,
                                      0xa0,
                                      0xa0,
                                      0x40,
                                      0x00,
                                  },
                                  // Oacute
                                  (const uint8_t[]){
                                      0x20,
                                      0x40,
                                      0xa0,
                                      0xa0,
                                      0x40,
                                      0x00,
                                  },
                                  // Ocircumflex
                                  (const uint8_t[]){
                                      0x40,
                                      0x40,
                                      0xa0,
                                      0xa0,
                                      0x40,
                                      0x00,
                                  },
                                  // Otilde
                                  (const uint8_t[]){
                                      0x70,
                                      0xe0,
                                      0xa0,
                                      0xa0,
                                      0x40,
                                      0x00,
                                  },
                                  // Odieresis
                                  (const uint8_t[]){
                                      0xa0,
                                      0x40,
                                      0xa0,
                                      0xa0,
                                      0x40,
                                      0x00,
                                  },
                                  // multiply
                                  (const uint8_t[]){
                                      0x00,
                                      0xa0,
                                      0x40,
                                      0xa0,
                                      0x00,
                                      0x00,
                                  },
                                  // Oslash
                                  (const uint8_t[]){
                                      0x60,
                                      0xa0,
                                      0xe0,
                                      0xa0,
                                      0xc0,
                                      0x00,
                                  },
                                  // Ugrave
                                  (const uint8_t[]){
                                      0x80,
                                      0x40,
                                      0xa0,
                                      0xa0,
                                      0xe0,
                                      0x00,
                                  },
                                  // Uacute
                                  (const uint8_t[]){
                                      0x20,
                                      0x40,
                                      0xa0,
                                      0xa0,
                                      0xe0,
                                      0x00,
                                  },
                                  // Ucircumflex
                                  (const uint8_t[]){
                                      0x40,
                                      0x00,
                                      0xa0,
                                      0xa0,
                                      0xe0,
                                      0x00,
                                  },
                                  // Udieresis
                                  (const uint8_t[]){
                                      0xa0,
                                      0x00,
                                      0xa0,
                                      0xa0,
                                      0xe0,
                                      0x00,
                                  },
                                  // Yacute
                                  (const uint8_t[]){
                                      0x20,
                                      0x00,
                                      0xa0,
                                      0x40,
                                      0x40,
                                      0x00,
                                  },
                                  // Thorn
                                  (const uint8_t[]){
                                      0x80,
                                      0xc0,
                                      0xa0,
                                      0xc0,
                                      0x80,
                                      0x00,
                                  },
                                  // germandbls
                                  (const uint8_t[]){
                                      0x40,
                                      0xa0,
                                      0xc0,
                                      0xa0,
                                      0xe0,
                                      0x80,
                                  },
                                  // agrave
                                  (const uint8_t[]){
                                      0x80,
                                      0x40,
                                      0x60,
                                      0xa0,
                                      0x60,
                                      0x00,
                                  },
                                  // aacute
                                  (const uint8_t[]){
                                      0x20,
                                      0x40,
                                      0x60,
                                      0xa0,
                                      0x60,
                                      0x00,
                                  },
                                  // acircumflex
                                  (const uint8_t[]){
                                      0x60,
                                      0x00,
                                      0x60,
                                      0xa0,
                                      0x60,
                                      0x00,
                                  },
                                  // atilde
                                  (const uint8_t[]){
                                      0x50,
                                      0xa0,
                                      0x60,
                                      0xa0,
                                      0x60,
                                      0x00,
                                  },
                                  // adieresis
                                  (const uint8_t[]){
                                      0xa0,
                                      0x00,
                                      0x60,
                                      0xa0,
                                      0x60,
                                      0x00,
                                  },
                                  // aring
                                  (const uint8_t[]){
                                      0x40,
                                      0x00,
                                      0x60,
                                      0xa0,
                                      0x60,
                                      0x00,
                                  },
                                  // ae
                                  (const uint8_t[]){
                                      0x00,
                                      0x70,
                                      0xb0,
                                      0xa0,
                                      0x70,
                                      0x00,
                                  },
                                  // ccedilla
                                  (const uint8_t[]){
                                      0x00,
                                      0x40,
                                      0xa0,
                                      0x80,
                                      0x60,
                                      0x40,
                                  },
                                  // egrave
                                  (const uint8_t[]){
                                      0x80,
                                      0x40,
                                      0xa0,
                                      0xc0,
                                      0x60,
                                      0x00,
                                  },
                                  // eacute
                                  (const uint8_t[]){
                                      0x20,
                                      0x40,
                                      0xa0,
                                      0xc0,
                                      0x60,
                                      0x00,
                                  },
                                  // ecircumflex
                                  (const uint8_t[]){
                                      0xc0,
                                      0x40,
                                      0xa0,
                                      0xc0,
                                      0x60,
                                      0x00,
                                  },
                                  // edieresis
                                  (const uint8_t[]){
                                      0xa0,
                                      0x40,
                                      0xa0,
                                      0xc0,
                                      0x60,
                                      0x00,
                                  },
                                  // igrave
                                  (const uint8_t[]){
                                      0x80,
                                      0x40,
                                      0x40,
                                      0x40,
                                      0xe0,
                                      0x00,
                                  },
                                  // iacute
                                  (const uint8_t[]){
                                      0x20,
                                      0xc0,
                                      0x40,
                                      0x40,
                                      0xe0,
                                      0x00,
                                  },
                                  // icircumflex
                                  (const uint8_t[]){
                                      0x40,
                                      0xa0,
                                      0x40,
                                      0x40,
                                      0xe0,
                                      0x00,
                                  },
                                  // idieresis
                                  (const uint8_t[]){
                                      0xa0,
                                      0x00,
                                      0xc0,
                                      0x40,
                                      0xe0,
                                      0x00,
                                  },
                                  // eth
                                  (const uint8_t[]){
                                      0xa0,
                                      0x40,
                                      0x60,
                                      0xa0,
                                      0x40,
                                      0x00,
                                  },
                                  // ntilde
                                  (const uint8_t[]){
                                      0x50,
                                      0xa0,
                                      0xc0,
                                      0xa0,
                                      0xa0,
                                      0x00,
                                  },
                                  // ograve
                                  (const uint8_t[]){
                                      0x80,
                                      0x40,
                                      0x40,
                                      0xa0,
                                      0x40,
                                      0x00,
                                  },
                                  // oacute
                                  (const uint8_t[]){
                                      0x20,
                                      0x40,
                                      0x40,
                                      0xa0,
                                      0x40,
                                      0x00,
                                  },
                                  // ocircumflex
                                  (const uint8_t[]){
                                      0x40,
                                      0x00,
                                      0x40,
                                      0xa0,
                                      0x40,
                                      0x00,
                                  },
                                  // otilde
                                  (const uint8_t[]){
                                      0xe0,
                                      0x00,
                                      0x40,
                                      0xa0,
                                      0x40,
                                      0x00,
                                  },
                                  // odieresis
                                  (const uint8_t[]){
                                      0xa0,
                                      0x00,
                                      0x40,
                                      0xa0,
                                      0x40,
                                      0x00,
                                  },
                                  // divide
                                  (const uint8_t[]){
                                      0x40,
                                      0x00,
                                      0xe0,
                                      0x00,
                                      0x40,
                                      0x00,
                                  },
                                  // oslash
                                  (const uint8_t[]){
                                      0x00,
                                      0x60,
                                      0xa0,
                                      0xa0,
                                      0xc0,
                                      0x00,
                                  },
                                  // ugrave
                                  (const uint8_t[]){
                                      0x80,
                                      0x40,
                                      0xa0,
                                      0xa0,
                                      0x60,
                                      0x00,
                                  },
                                  // uacute
                                  (const uint8_t[]){
                                      0x20,
                                      0x40,
                                      0xa0,
                                      0xa0,
                                      0x60,
                                      0x00,
                                  },
                                  // ucircumflex
                                  (const uint8_t[]){
                                      0x40,
                                      0x00,
                                      0xa0,
                                      0xa0,
                                      0x60,
                                      0x00,
                                  },
                                  // udieresis
                                  (const uint8_t[]){
                                      0xa0,
                                      0x00,
                                      0xa0,
                                      0xa0,
                                      0x60,
                                      0x00,
                                  },
                                  // yacute
                                  (const uint8_t[]){
                                      0x20,
                                      0x40,
                                      0xa0,
                                      0xe0,
                                      0x20,
                                      0xc0,
                                  },
                                  // thorn
                                  (const uint8_t[]){
                                      0x80,
                                      0x80,
                                      0xc0,
                                      0xa0,
                                      0xc0,
                                      0x80,
                                  },
                              }};
