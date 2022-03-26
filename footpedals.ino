
#include "Keyboard.h"

const int F1Pin = 7;          // input pin for pushbutton
const int F2Pin = 6;
const int F3Pin = 5;
const int F4Pin = 4;
const int F5Pin = 3;
const int F6Pin = 2;

void setup() {
  // make the pushButton pin an input:
  pinMode(F1Pin, INPUT_PULLUP);
  pinMode(F2Pin, INPUT_PULLUP);
  pinMode(F3Pin, INPUT_PULLUP);
  pinMode(F4Pin, INPUT_PULLUP);
  pinMode(F5Pin, INPUT_PULLUP);
  pinMode(F6Pin, INPUT_PULLUP);
  // initialize control over the keyboard:
  Keyboard.begin();
}

void loop() {
  // read the pushbutton:
    if(digitalRead(F1Pin) == LOW){
      Keyboard.press(KEY_F1);
    }
    else{
      Keyboard.release(KEY_F1);
    }

    if(digitalRead(F2Pin) == LOW){
      Keyboard.press(KEY_F2);
    }
    else{
      Keyboard.release(KEY_F2);
    }

    if(digitalRead(F3Pin) == LOW){
      Keyboard.press(KEY_F3);
    }
    else{
      Keyboard.release(KEY_F3);
    }

    if(digitalRead(F4Pin) == LOW){
      Keyboard.press(KEY_F4);
    }
    else{
      Keyboard.release(KEY_F4);
    }

    if(digitalRead(F5Pin) == LOW){
      Keyboard.press(KEY_F5);
    }
    else{
      Keyboard.release(KEY_F5);
    }

    if(digitalRead(F6Pin) == LOW){
      Keyboard.press(KEY_F6);
    }
    else{
      Keyboard.release(KEY_F6);
    }
  

}
