// This code blinks an led on the UNO at a time interval determined by the Delay variable
int led = 13; 
int Delay = 250;
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);
  delay(Delay);
  digitalWrite(led, LOW);
  delay(Delay);  
}
