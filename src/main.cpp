#include <Arduino.h>
#include <EEPROM.h>

void setup() {
  // put your setup code here, to run once:
  pinMode(D4,OUTPUT);
}
bool toggle = false;
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(D4,toggle?1:0);
  delay(100);
  toggle = !toggle;
  digitalWrite(D4,toggle?1:0);
  delay(2000);
  toggle = !toggle;

}