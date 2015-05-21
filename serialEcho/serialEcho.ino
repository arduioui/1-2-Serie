// Arduioui
// Echo program in Serial, return what we received

void setup() {
  // setup code here, to run once

  Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
}

void loop() {
  // main code here, to run repeatedly

  if (Serial.available()) { // send data only when we receive data
    String str = Serial.readString(); // read the incoming string
    Serial.println(str);
  }
  delay(170);
}
