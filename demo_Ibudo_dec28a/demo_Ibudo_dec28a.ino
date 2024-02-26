// installation de librairiie Servo 
#include <Servo.h> 

// creation d'un objet servo pour controler le servo moteur 
Servo monServo; 

int angle = 0; 

void setup(){
monServo.attach(9); // specification du port de connexion sur la carte arduino
}

void loop() 
{
for (angle=0; angle<180; angle+=1) // put your main code here, to run repeatedly:
 
{
monServo.write(angle);
delay(20);
}

for (angle=180; angle>=1; angle-=1)

{
monServo.write(angle);
delay(20);
}} 
