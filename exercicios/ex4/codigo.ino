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
var = digitalRead(bot1);
  
  if(var){
    acendeTudo();
  }else{
    
  }
}
void acendeTudo(){
   digitalWrite(led2, HIGH);
}
  
