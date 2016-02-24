
#include <Joystick.h>


int UD = 0;
int LR = 0;

int buffer = 20;

boolean up = false;
boolean down = false;
boolean right = false;
boolean left = false;


void setup() {
  Serial.begin(9600);
  Joystick.begin();
  pinMode(3,INPUT);
  pinMode(7,INPUT);
  pinMode(9,INPUT);
  
}

void loop() {
  for(int i = 0; i < 16; i++){
  }
  int UD1 = map(analogRead(A0),0,1024,-127,127);
  int LR1 = -1* map(analogRead(A1),0,1024,-127,127);
  int UD2 = map(analogRead(A2),0,1024,-127,127);
  int LR2 = map(analogRead(A3),0,1024,-127,127);
  Joystick.setYAxis(UD1);
  Joystick.setXAxis(LR1); 
  Serial.println("-----");
  if(UD2<=15&&UD2>=-15&&LR2>=-20&&LR2<=20){
    up = false;
    down = false;
    left = false;
    right = false;
  }else{
  up = (UD2>(-1*LR2)&&(UD2>=(LR2)))?true:false;
  down = (UD2<(-1*LR2)&&(UD2<=(LR2)))?true:false;
  left = (UD2<=(-1*LR2)&&(UD2>(LR2)))?true:false;
  right  = (UD2>=(-1*LR2)&&(UD2<(LR2)))?true:false;}
  if(down){
    Serial.println("down");
    Joystick.pressButton(1);
    Joystick.releaseButton(2);
    Joystick.releaseButton(3);
    Joystick.releaseButton(4);
  }
  else if(up){
    Serial.println("up");
    Joystick.releaseButton(1);
    Joystick.pressButton(2);
    Joystick.releaseButton(3);
    Joystick.releaseButton(4);
  }else if(left){
    Serial.println("left");
    Joystick.releaseButton(1);
    Joystick.releaseButton(2);
    Joystick.pressButton(3);
    Joystick.releaseButton(4);
  }else if(right){
    Serial.println("right");
    Joystick.releaseButton(1);
    Joystick.releaseButton(2);
    Joystick.releaseButton(3);
    Joystick.pressButton(4);
  }
  else{
    Serial.println("NOTHING");
    Joystick.releaseButton(1);
    Joystick.releaseButton(2);
    Joystick.releaseButton(3);
    Joystick.releaseButton(4);
    up=false;
    down=false;
    left=false;
    right=false;
  }
  if(digitalRead(3)){
    Joystick.pressButton(0);
  }
  else{
    Joystick.releaseButton(0);
  }
  if(digitalRead(7)){
    Serial.println("7");
    Joystick.pressButton(8);
  }
  else{
    Joystick.releaseButton(8);
  }
  if(digitalRead(9)){
    Serial.println("9");
    Joystick.pressButton(9);
  }
  else{
    Joystick.releaseButton(9);
  }
 
}
