#include <WString.h>

void setup() {
    Serial.begin(9600);
    const char * stri ="Hello World";
    String str (stri);
    Serial.print(str.startsWith("H"));
}

void loop() {
    delay(1);
}