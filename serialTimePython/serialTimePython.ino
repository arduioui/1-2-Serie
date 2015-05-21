// Arduioui
// Read Serial and if 116 (DEC of 't') it return time since program started

unsigned long time;

void setup() {
  // setup code here, to run once
  
  Serial.begin(9600);
}

void loop() {
  // main code here, to run repeatedly
  
  if (Serial.available()) {
    char command = Serial.read();
    if (command == 116) {    
      time = millis();      // return time since program started
      Serial.println(time);
    }
  }
  
  delay(200);
}
