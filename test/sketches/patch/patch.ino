extern int foobar();

void setup() {
    pinMode(0, OUTPUT);
    analogWrite(0, foobar());
    analogRead(0);
}

void loop() {
    delay(1);
}
