// C++ code
//
  const int bot1 = 4;
const int bot2 = 5;
const int bot3 = 6;
const int bot4 = 7;
const int bot5 = 8;

void setup()
{
Serial.begin(9600);
  pinMode(bot1,INPUT);
  pinMode(bot2,INPUT);
  pinMode(bot3,INPUT);
  pinMode(bot4,INPUT);
  pinMode(bot5,INPUT);

}

int var;
int var2;
int var3;
int var4;
int var5;

void loop()
{

var = digitalRead(bot1);
var2 = digitalRead(bot2);
var3 = digitalRead(bot3);
var4 = digitalRead(bot4);
var5 = digitalRead(bot5);
  
  if(var){
Serial.println("oi professor");
  }
  if(var2){
Serial.println("Tudo bem com vc ?");
  }
  if(var3){
Serial.println("vc vai me dar um 10 ?");
  }
  if(var4){
Serial.println("nao sei mais oq escrever");
  }
  if(var5){
Serial.println("tchau professor");
  }
}
