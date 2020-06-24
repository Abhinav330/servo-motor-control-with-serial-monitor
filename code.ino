#include <Servo.h>
Servo s ;
int  x  ;


void setup() {
  Serial.begin(9600);
  s.attach(3);
  Serial.println("Write any number between 1 to 180"); 
 s.write(0);
}

void loop() {

  if (Serial.available()> 0)
{
 
  x = Serial.parseInt();
    Serial.println(x);
 }
  if(x>= 0 && x<= 180)
  {
   s.write(x);
   delay(100);  
  }

 else
 {
   
  Serial.println("Invalid input");
   
 }

}
