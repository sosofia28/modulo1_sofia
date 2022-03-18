// C++ code
//

const int led1 = 1;
const int led2 = 2;
const int led3 = 3;
const int led4 = 4;
const int led5 = 5;
const int led6 = 6;
const int led7 = 7;
const int led8 = 8;
const int led9 = 9;
const int led10 = 10;
const int bot1 = 11;
const int bot2 = 12;
const int bot3 = 13;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  
  pinMode(bot1,INPUT);
  pinMode(bot2,INPUT);
  pinMode(bot3,INPUT);
}

int var;
int var2;
int var3;

void loop()
{
 var = digitalRead(bot1);
 var2 = digitalRead(bot2);
 var3 = digitalRead(bot3);
  
  if(var){
    acendeTudo();
  }
  if(var2){
    apagarTudo();
  }
  if(var3){
    acendeQuaseTudo();
  }
}
 void acendeTudo(){
   digitalWrite(led1,HIGH);
   digitalWrite(led2,HIGH);
   digitalWrite(led3,HIGH);
   digitalWrite(led4,HIGH);
   digitalWrite(led5,HIGH);
   digitalWrite(led6,HIGH);
   digitalWrite(led7,HIGH);
   digitalWrite(led8,HIGH);
   digitalWrite(led9,HIGH);
   digitalWrite(led10,HIGH);

}

void apagarTudo(){
   digitalWrite(led1,LOW);
   digitalWrite(led2,LOW);
   digitalWrite(led3,LOW);
   digitalWrite(led4,LOW);
   digitalWrite(led5,LOW); 
   digitalWrite(led6,LOW);
   digitalWrite(led7,LOW);
   digitalWrite(led8,LOW);
   digitalWrite(led9,LOW); 
  digitalWrite(led10,LOW); 
}

void acendeQuaseTudo(){
   digitalWrite(led2, HIGH);
   digitalWrite(led4,HIGH);
   digitalWrite(led6,HIGH);
   digitalWrite(led8,HIGH);
   digitalWrite(led10,HIGH);
  delay(2000);
  apagarTudo();
   }
