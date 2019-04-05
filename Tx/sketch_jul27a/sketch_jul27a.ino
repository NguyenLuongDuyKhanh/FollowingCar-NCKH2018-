void setup()
{
  pinMode(PA4,INPUT_ANALOG);
  pinMode(PB1,OUTPUT);
  //pinMode(PC13,OUTPUT);

}
  int a;
  
void loop()
{

 
//  digitalWrite(PC13,HIGH);
//  delay(500);
//  digitalWrite(PC13,LOW);
//  delay(500);


  a = analogRead(PA4);
  analogWrite(PB1,a);

}

