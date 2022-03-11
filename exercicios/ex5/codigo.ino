// C++ code
//

const int led2 = 2;
  const int bot1 = 5;

void setup()
{
  pinMode(2, OUTPUT);

}

int var;

void loop()
{
digitalWrite(2,HIGH);
  delay(1000);

var = digitalRead(bot1);
  
  if(var){
    apagar();
  }else{
    
  }
}
void apagar(){
   digitalWrite(2, LOW);
  delay(1000);
}
