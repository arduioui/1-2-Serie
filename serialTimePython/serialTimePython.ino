// Read Serial, if receive 't', return time since program started
unsigned long time;

void setup() {
  // setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // main code here, to run repeatedly:
  if (Serial.available()) {   // if there is something to read
    int lu = Serial.read();
    if (lu == 116) {          // if we receive 't'
      time = millis();
      Serial.println(time);
    }
  }
}
