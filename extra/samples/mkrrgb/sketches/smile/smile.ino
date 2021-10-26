#include <Arduino_MKRRGB.h>

void setup() {
    MATRIX.begin();
    MATRIX.beginDraw();
    MATRIX.background(0, 0, 0);
    MATRIX.clear();
    MATRIX.brightness(255);
    MATRIX.set(3, 1, 255, 255, 255);
    MATRIX.set(8, 1, 255, 255, 255);
    MATRIX.set(4, 4, 255, 255, 255);
    MATRIX.set(5, 4, 255, 255, 255);
    MATRIX.set(6, 4, 255, 255, 255);
    MATRIX.set(7, 4, 255, 255, 255);
    MATRIX.set(3, 5, 255, 255, 255);
    MATRIX.set(8, 5, 255, 255, 255);
    MATRIX.endDraw();
}

// The top-left pixel (position 0,0) switches every second between red and blue
void loop() {
    MATRIX.set(0, 0, 255, 0, 0);
    delay(1000);
    MATRIX.set(0, 0, 0, 0, 255);
    delay(1000);
}
