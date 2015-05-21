// Arduioui
// Very simple use of Serial to print "Hello World !" every 5 seconds

void setup() {
  // setup code here, to run once

  Serial.begin(9600);
}

void loop() {
  // main code here, to run repeatedly

  Serial.println("Hello World !");
  delay(5000);
}
