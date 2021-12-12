#include <WString.h>

void setup() {
    Serial.begin(9600);
    const char * stri ="Hello World";
    String str (stri);
    if (str.startsWith("H"))
        Serial.print('1');
}

void loop() {
    delay(1);
}