// Echo program

void setup() {
  // setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // main code here, to run repeatedly:
  if (Serial.available()) {
    int lu = Serial.read();
    Serial.println(lu);
  } else {
    Serial.println("Rien");
  }
  delay(2000);
}
