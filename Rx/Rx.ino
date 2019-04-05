#define INA PA1
#define INB PA4
#define PWMPIN  PB11
#define Center 65

void setup()
{
  //A1 ina
  pinMode(PA1, OUTPUT);
  //A4 inb
  pinMode(PA4, OUTPUT);
  //B9 PWM
  pinMode(PB9, PWM);
  //B8 Servo
  pinMode(PB8, PWM);
}

void loop()
{
  digitalWrite(PA4,HIGH);
  digitalWrite(PA1,LOW);
  pwmWrite(PB8,Center*655);
  pwmWrite(PB9,60000);
  for(int i=0;i<40;i++)
  {
    pwmWrite(PB8,(Center-i)*655);
    delay(10);
  }
  for(int i=0;i<40;i++)
  {
    pwmWrite(PB8,(Center+i)*655);
    delay(10);
  }
//  for(int i=0;i<=65535;i+=10)
//  {
//    pwmWrite(PB9,i);
//    delay(1);
//  }
//  for(int i=65535;i>=0;i-=10)
//  {
//    pwmWrite(PB9,i);
//    delay(1);
//  }

  
}

