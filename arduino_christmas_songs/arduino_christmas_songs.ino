#include "Plsheal.h"

int buzzerPin = 8;
PLSHEAL myPin(buzzerPin); 

void setup() {
}

void loop() {
  myPin.playFirstSong(buzzerPin, 6, 9, 10);
  myPin.playSecondSong(buzzerPin, 6, 9, 10);
  myPin.playThirdSong(buzzerPin, 6, 9, 10);
}