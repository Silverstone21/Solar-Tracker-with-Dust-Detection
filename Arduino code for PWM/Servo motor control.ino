int servoPin = 9; 

int temp1 = LOW;
int temp2 = LOW;
int temp3 = LOW;
int temp4 = LOW;
int temp5 = LOW;


void setup() {
  pinMode(servoPin, OUTPUT);  
  pinMode(2, INPUT);          
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  
}

void loop() {

  int input7 = digitalRead(2);
  int input6 = digitalRead(3);
  int input5 = digitalRead(4);
  int input4 = digitalRead(5);
  int input3 = digitalRead(6);

  if (input7 == HIGH && temp1 == LOW) {  //60
    digitalWrite(servoPin, HIGH);  
    delayMicroseconds(1333);        
    digitalWrite(servoPin, LOW);   
    delay(18.667);
    temp1 = HIGH;
    delay(1000); 
  }

  if (input7 == LOW) {
    temp1 = LOW;
  }

  if (input6 == HIGH && temp2 == LOW) {  //0    
    digitalWrite(servoPin, HIGH);
    delayMicroseconds(1000);      
    digitalWrite(servoPin, LOW);  
    delay(19);               
    temp2 = HIGH;
    delay(1000);  
  }

  if (input6 == LOW) {
    temp2 = LOW;
  }


  if (input5 == HIGH && temp3 == LOW) {  //60
  
    digitalWrite(servoPin, HIGH);  
    delayMicroseconds(1333);      
    digitalWrite(servoPin, LOW); 
    delay(18.667);             
    temp3 = HIGH;
    delay(1000);  
  }

  if (input5 == LOW) {
    temp3 = LOW;
  }


  if (input3 == HIGH && temp4 == LOW) { //153
    digitalWrite(servoPin, HIGH); 
    delayMicroseconds(1850);      
    digitalWrite(servoPin, LOW);   
    delay(18.15);             
    temp4 = HIGH;
    delay(1000); 
  }

  if (input4 == LOW) {
    temp4 = LOW;
  }


  if (input4 == HIGH && temp5 == LOW) {   //120
    digitalWrite(servoPin, HIGH); 
    delayMicroseconds(1666);   
    digitalWrite(servoPin, LOW);  
    delay(18.334);                 
    temp5 = HIGH;
    delay(1000); 
  }

  if (input3 == LOW) {
    temp5 = LOW;
  }}
