// C++ code
//

const int led2 = 2;
  const int bot1 = 5;

void setup()
{
  pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
}

int var;

void loop()
{
var = digitalRead(bot1);
  
  if(var){
    acendeTudo();
  }else{
    
  }
}
void acendeTudo(){
   digitalWrite(led2, HIGH);
}
  
