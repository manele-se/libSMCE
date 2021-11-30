#include <WString.h>

void setup() {
    Serial.begin(9600);
    String str ("Hello World");
    Serial.print(str.charAt(2));
}

void loop() {
    delay(1);
}