#include <PS2X_lib.h>
 
#define PS2_DAT 13 // data
#define PS2_CMD 11 //command
#define PS2_SEL 10 // attention
#define PS2_CLK 12 //clock
 
//#define pressures   true
#define pressures false
//#define rumble      true
#define rumble false
PS2X ps2x; // tạo PS2 điều khiển lớp
int error = 0;
byte type = 0;
byte vibrate = 0;
//Biến cho analog
int temp1;
int temp2;
int temp3;
int temp4;
int temp33;
int temp44;

byte Head;
byte Back;

void Chieu();
void Lai();
void Tocdo();

#define Servopin 6
#define PWM 5

void setup()
{
  pinMode(Servopin, OUTPUT);
  pinMode(PWM, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  
//    //khai báo các chân điều khiển động cơ
//    pinMode(3, OUTPUT);
//    pinMode(5, OUTPUT);
//    pinMode(6, OUTPUT);
//    pinMode(9, OUTPUT);
//    Serial.begin(57600);
// 
//    delay(300);
//    error = ps2x.config_gamepad(PS2_CLK, PS2_CMD, PS2_SEL, PS2_DAT, pressures, rumble);
//    if (error == 0) {
//        Serial.print("Đã tìm thấy bộ điều khiển ");
//        Serial.print("pressures = ");
//        if (pressures)
//            Serial.println("true ");
//        else
//            Serial.println("false");
//        Serial.print("rumble = ");
//        if (rumble)
//            Serial.println("true)");
//        else
//            Serial.println("false");
//        Serial.println("Hãy thử tất cả các nút;");
//        Serial.println("giữ L1 hoặc R1 sẽ in ra các giá trị analog.");
//    }
//    else if (error == 1)
//        Serial.println("Không kết nối đc, thử lại...");
// 
//    else if (error == 2)
//        Serial.println("Bộ điều khiển tìm thấy nhưng không chấp nhận lệnh");
// 
//    else if (error == 3)
//        Serial.println("Bộ điều khiển từ chối để vào chế độ Pressures ");
// 
//    //  Serial.print(ps2x.Analog(1), HEX);
//    type = ps2x.readType();
//    switch (type) {
//    case 0:
//        Serial.print("Tay điều khiển không phù hợp ");
//        break;
//    case 1:
//        Serial.print("Đã tìm thấy DualShock ");
//        break;
//    case 2:
//        Serial.print("Đã tìm thấy GuitarHero ");
//        break;
//    case 3:
//        Serial.print("Không dây của Sony DualShock điều khiển tìm thấy ");
//        break;
//    }
}
 
void loop()
{
//    if (error == 1)
//        return;
// 
//    if (type == 2) {
//        ps2x.read_gamepad();
//    }
//    else { //DualShock Controller
//        ps2x.read_gamepad(false, vibrate); //read controller and set large motor to spin at 'vibrate' speed
//    }
//   Serial.println(ps2x.Analog(PSS_RY));
//   Serial.print(ps2x.Analog(PSS_RX));
//   delay(100);

  //Chieu();
  
    for(int i=0;i<200;i++)
    {
      analogWrite(Servopin,i);
      delay(10);
    }
      for(int i=200;i>0;i--)
    {
      analogWrite(Servopin,i);
      delay(10);
    }
   
}

void Chieu()
{
  if(Head==1&&Back==0)
  {
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
  }else if(Head==0&&Back==1)
  {
    digitalWrite(3,LOW);
    digitalWrite(2,HIGH);
  }
}
