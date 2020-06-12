#include <SoftwareSerial.h>
#include <Servo.h>
SoftwareSerial mySerial(2, 3);
Servo servo_test;
const int IR_Sensor1 = 10;
const int IR_Sensor2 = 11;
const int IR_Sensor3 = 8;
int angle = 0;
void setup()
{
  mySerial.begin(9600);   // Setting the baud rate of GSM Module
  Serial.begin(9600);    // Setting the baud rate of Serial Monitor (Arduino)
  delay(100);
  servo_test.attach(7);
  servo_test.write(0);
  delay(200);
  pinMode(IR_Sensor1, INPUT);
  pinMode(IR_Sensor2, INPUT);
  pinMode(IR_Sensor3, INPUT);
    
}
void loop()
{
  if (digitalRead(IR_Sensor3) == 1)
  {
    servo_test.write(99);
    delay(500);
  }
    if (digitalRead(IR_Sensor3) == 0)
    {
      servo_test.write(0);
      delay(500);
         }
 
  if (digitalRead(IR_Sensor1) == 0)
  {
    SendMessage1();
  }
 
  if (digitalRead(IR_Sensor2) == 0)
  {
    SendMessage2();
  }

}// void loop

void SendMessage1()
{
  mySerial.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
  delay(1000);  // Delay of 1000 milli seconds or 1 second
  mySerial.println("AT+CMGS=\"+918328589345\"\r"); // Replace x with mobile number
  delay(1000);
  mySerial.println("DUSTBIN FILLED at AICSKU! please take the action IMMEDIATELY!!!");// The SMS text you want to send
  delay(100);
  mySerial.println((char)26);// ASCII code of CTRL+Z
  delay(1000);
  
  while(1) 
  {
    if (digitalRead(IR_Sensor1) == 1)  
    {
      return digitalRead(IR_Sensor1);
    }
  }
}
void SendMessage2()
{
  mySerial.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
  delay(1000);  // Delay of 1000 milli seconds or 1 second
  mySerial.println("AT+CMGS=\"+918328589345\"\r"); // Replace x with mobile number
  delay(1000);
  mySerial.println("DUSTBIN FILLED at AICSKU! please clean the dustbin!!!");// The SMS text you want to send
  delay(100);
  mySerial.println((char)26);// ASCII code of CTRL+Z
  delay(1000);

  while(1)
  {
    if (digitalRead(IR_Sensor1) == 1) 
    {
      return digitalRead(IR_Sensor2);
    }
  }
}
