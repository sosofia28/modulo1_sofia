// C++ code
//
  const int bot1 = 4;
const int bot2 = 5;
const int bot3 = 6;
const int bot4 = 7;
const int bot5 = 8;
const int bot6 = 9;
const int bot7 = 10;

void setup()
{
Serial.begin(9600);
  pinMode(4,INPUT);
  pinMode(5,INPUT);
  pinMode(6,INPUT);
  pinMode(7,INPUT);
  pinMode(8,INPUT);
    pinMode(9,INPUT);
  pinMode(10,INPUT);

}

int var;
int var2;
int var3;
int var4;
int var5;
int var6;
int var7;

void loop()
{

var = digitalRead(bot1);
var2 = digitalRead(bot2);
var3 = digitalRead(bot3);
var4 = digitalRead(bot4);
var5 = digitalRead(bot5);
  var6 = digitalRead(bot6);
var7 = digitalRead(bot7);
  
  if(var){
Serial.println("Do");
  }
  if(var2){
Serial.println("Re");
  }
  if(var3){
Serial.println("Mi");
  }
  if(var4){
Serial.println("Fa");
  }
  if(var5){
Serial.println("Sol");
  }
    if(var4){
Serial.println("Fa");
  }
  if(var5){
Serial.println("Sol");
  }
    if(var6){
Serial.println("Lá");
  }
  if(var7){
Serial.println("Si");
  }
     }
