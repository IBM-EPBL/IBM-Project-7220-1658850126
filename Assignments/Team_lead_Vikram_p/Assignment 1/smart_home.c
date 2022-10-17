#include <Servo.h>

Servo myservo;  

int pos = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
    pinMode(A0, INPUT);
    pinMode(A1, INPUT);
    myservo.attach(11);
  
}

void loop()
{
     int s1 = analogRead(A0);
     int s2 = analogRead(A1);
     //Serial.println(s1);
     Serial.println(s2);
  delay(10);
  if(s2<700)
  { for (pos = 0; pos <= 180; pos += 2) { 
    
    myservo.write(pos);              
    delay(5);                       
  }
  for (pos = 180; pos >= 0; pos -= 2) { 
    myservo.write(pos);  
    delay(5);                     
  } 
  delay(2000);
  }
  if(s1>500)
  {
    digitalWrite(13, HIGH);
  }
  if(s1<500)
    {
    digitalWrite(13, LOW);
  }
}
