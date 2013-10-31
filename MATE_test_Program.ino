


void setup() {     
  
pinMode(2,OUTPUT); // Pin 2
pinMode(3,OUTPUT); // Pin 3
pinMode(4,OUTPUT); // Pin 4
pinMode(5,OUTPUT); // Pin 5
pinMode(6,OUTPUT); // Pin 6
pinMode(7,OUTPUT); // Pin 7
pinMode(8,OUTPUT); // Pin 8
pinMode(9,OUTPUT); // Pin 9

digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
digitalWrite(7,HIGH);
digitalWrite(8,HIGH);
digitalWrite(9,HIGH);

}


void loop() {
 one();

 
 
}


void one(void) {
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
}
