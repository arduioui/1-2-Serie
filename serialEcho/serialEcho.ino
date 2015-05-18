// Echo program, return what we received

void setup() {
  // setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // main code here, to run repeatedly:
  if (Serial.available()) {   // if there is something to read
    int lu = Serial.read();
    Serial.println(lu);       // send in Hexadecimal of ASCII char
  } else {                    // or we send "nothing"
    Serial.println("nothing");
  }
  delay(1000);
}
