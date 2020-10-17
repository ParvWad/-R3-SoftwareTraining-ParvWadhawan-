const int Forward_toggle = 8;
const int Reverse_toggle = 9; 
const int Left_toggle  = 12;
const int Right_toggle = 13; 
const int motorA1 = 3; 
const int motorA2 = 5; 
const int motorB1 = 6; 
const int motorB2 = 10;
int pwm = 1; 
double pot; 
void setup()
{
  pinMode(motorA1, OUTPUT);
  pinMode(motorA2,OUTPUT); // Setting arudino pin 5 as an output
  pinMode(motorB1, OUTPUT); //setting arduino pin 6 as an output
  pinMode(motorB2,OUTPUT);  // setting arduino pin 7 as an output 
  pinMode(Forward_toggle, INPUT); 
  pinMode(Reverse_toggle, INPUT); 
  pinMode(Left_toggle, INPUT); 
  pinMode(Right_toggle, INPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  //setting up the potentiometer inputs
  pot = analogRead(A0);
  pot = (pot/1023)*250;
  //code for moving forward
  if (digitalRead(Forward_toggle)){
  analogWrite(motorA2,pot); 
   digitalWrite(motorA1, LOW); 
   digitalWrite(motorB1, LOW); 
   analogWrite(motorB2, pot);
  }
  else if (digitalRead(Reverse_toggle)){ //code for moving in reverse
 
    
    digitalWrite(motorA2, LOW); 
    analogWrite(motorA1, pot); 
    analogWrite(motorB1, pot); 
    digitalWrite(motorB2, LOW);
  }
  else if (digitalRead(Left_toggle)){ //code for moving left 
    
    digitalWrite(motorA2, LOW); 
    analogWrite(motorA1, pot);
    digitalWrite(motorB1, LOW); 
    analogWrite(motorB2, pot);  
  }
  else if (digitalRead(Right_toggle)) { //code for moving right
 
    analogWrite(motorA2, pot);
  	digitalWrite(motorA1, LOW);
  	analogWrite(motorB1, pot); 
  	digitalWrite(motorB2, LOW);
  }
  else{ //default state (no movement)
   digitalWrite(motorA2, LOW); 
   digitalWrite(motorA1, LOW);
   digitalWrite(motorB1, LOW);
   digitalWrite(motorB2, LOW); 
  }
}
