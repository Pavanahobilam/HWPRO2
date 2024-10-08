int POT=A0;
int LED=6;
int analogreadvalue;
int analogwritevalue;
void setup() {
  // put your setup code here, to run once:
 Serial.begin (9600);
 pinMode (POT, INPUT);
 pinMode (LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogreadvalue=analogRead(POT);
  analogwritevalue=(255./1023.)*analogreadvalue;
  analogWrite (LED, analogwritevalue);
  Serial.print("Analog value to LED:");
  Serial.print (analogwritevalue);
  delay (500);
}
