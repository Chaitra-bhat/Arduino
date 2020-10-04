const int buzzer = 9; //buzzer to arduino pin 9


//connect one pin of buzzer to pin9 
//connect another led to 100ohm resistor
//connect another leg of resistor to GND

void setup(){
 
  pinMode(buzzer, OUTPUT); // Set buzzer - pin 9 as an output

}

void loop(){
 
  tone(buzzer, 1000); // Send 1KHz sound signal...
  delay(1000);        // ...for 1 sec
  noTone(buzzer);     // Stop sound...
  delay(1000);        // ...for 1sec
  
}
