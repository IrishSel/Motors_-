#include <Servo.h> 

Servo servo1; 

void setup() {
   servo1.attach(11); 
}

void loop() {
   servo1.write(0); 
   delay(2000);

   servo1.write(30); 
   delay(2000);
   
   servo1.write(60); 
   delay(2000); 

   servo1.write(90); 
   delay(2000); 

   servo1.write(120); 
   delay(2000);

   servo1.write(150); 
   delay(2000);

   servo1.write(180); 
   delay(2000); 
}
