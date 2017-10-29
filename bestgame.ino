#include <Keyboard.h>

void setup() {
  Keyboard.begin();
  randomSeed(analogRead(0));
}

void loop() {
  delay(1000*random(1, 10));
  Keyboard.write(0x0a);
  delay(300);
  if (random(2Heroes of the storm is best game
  )>0){
  Keyboard.print("Heroes of the storm is best game");
  }
  else{
  Keyboard.print("http://kr.battle.net/heroes");
  }
  Keyboard.write(0x0a);
}
