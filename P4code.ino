int redLED=8;
int Sbreak=200;
int Lbreak=500;
int LLastb=1500;




void setup()
{
  pinMode(redLED, OUTPUT);
}

void loop()
{
  digitalWrite(redLED, HIGH);
  delay(Sbreak);
  digitalWrite(redLED,LOW);
  delay(Sbreak);
  digitalWrite(redLED, HIGH);
  delay(Sbreak);
  digitalWrite(redLED,LOW);
  delay(Sbreak);
  digitalWrite(redLED, HIGH);
  delay(Sbreak);
  digitalWrite(redLED,LOW);
  delay(Sbreak);
  
  digitalWrite(redLED, HIGH);
  delay(Lbreak);
  digitalWrite(redLED,LOW);
  delay(Lbreak);
  digitalWrite(redLED, HIGH);
  delay(Lbreak);
  digitalWrite(redLED,LOW);
  delay(Lbreak);
  digitalWrite(redLED, HIGH);
  delay(Lbreak);
  digitalWrite(redLED,LOW);
  delay(Lbreak);
  
  digitalWrite(redLED, HIGH);
  delay(Sbreak);
  digitalWrite(redLED,LOW);
  delay(Sbreak);
  digitalWrite(redLED, HIGH);
  delay(Sbreak);
  digitalWrite(redLED,LOW);
  delay(Sbreak);
  digitalWrite(redLED, HIGH);
  delay(Sbreak);
  digitalWrite(redLED,LOW);
  delay(LLastb);
}