#include <ArduinoGraphics.h>
#include <Arduino_MKRRGB.h>

void setup() {
    MATRIX.begin();
    MATRIX.beginDraw();
    MATRIX.background(0, 0, 0);
    MATRIX.clear();
    MATRIX.set(0, 0, 255, 255, 255);
    MATRIX.set(1, 3, 255, 255, 255);
    MATRIX.set(4, 5, 255, 255, 255);
    MATRIX.endDraw();
    MATRIX.brightness(255);
}

void loop() {}
