#include <SoftwareSerial.h>
SoftwareSerial mySerial(0, 1);

void setup() {
  Serial.begin(9600);
  mySerial.begin(4000);
}

int8_t data = 0;

void loop() {
  mySerial.write(data);
  Serial.write(data);
  delay(800);
  ++data;
  if (data == 10)
    data = 0;
}