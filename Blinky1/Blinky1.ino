#define RED     7
#define YELLOW  6
#define GREEN    5

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
}

void loop() {
  digitalWrite(RED, HIGH);
  //delay(300);
  digitalWrite(YELLOW, HIGH);
 /// delay(300);
  digitalWrite(GREEN, HIGH);
  delay(300);
   digitalWrite(RED, LOW);
  //delay(300);
  digitalWrite(YELLOW, LOW);
  //delay(300);
  digitalWrite(GREEN, LOW);
  delay(300);
}
