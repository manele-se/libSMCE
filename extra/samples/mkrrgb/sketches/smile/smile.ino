#include <Arduino_MKRRGB.h>

void setup() {
    MATRIX.beginDraw();
    MATRIX.background(0, 0, 0);
    MATRIX.clear();
    MATRIX.set(5, 3, 255, 255, 255);
    MATRIX.set(4, 4, 255, 255, 255);
    MATRIX.set(6, 4, 255, 255, 255);
}

void loop() {}
