void setup()
{
  pinMode(13, OUTPUT);
  pinMode(9, OUTPUT);
 
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(4000); // Wait for 4000 millisecond(s)
  digitalWrite(9, LOW);
  delay(4000); // Wait for 4000 millisecond(s)
   
  digitalWrite(13, LOW);
  delay(4000); // Wait for 4000 millisecond(s)
  digitalWrite(9, HIGH);
  delay(4000); // Wait for 4000 millisecond(s)
 
}


