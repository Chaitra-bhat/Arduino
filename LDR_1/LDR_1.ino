#define LDRPin  0

// Connect 1 leg of LDR to A0
// Connect another leg of LDR to +5V
// Connect a 100ohm resistor to A0
// Connect another leg of resistor to GND

 int val;
void setup() {
  
  Serial.begin(9600);
  //pinMode(LDRPin, INPUT);
}

void loop() {
  val = analogRead(LDRPin);
  Serial.println(val);
  delay(300);
}
