#include "Plsheal.h"
#include "Pitch.h"
#include <Arduino.h>

int melody[] = {
  NOTE_E5, NOTE_E5, NOTE_E5,
  NOTE_E5, NOTE_E5, NOTE_E5,
  NOTE_E5, NOTE_G5, NOTE_C5, NOTE_D5,
  NOTE_E5,
  NOTE_F5, NOTE_F5, NOTE_F5, NOTE_F5,
  NOTE_F5, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_E5,
  NOTE_E5, NOTE_D5, NOTE_D5, NOTE_E5,
  NOTE_D5, NOTE_G5
};

int tempo[] = {
  8, 8, 4,
  8, 8, 4,
  8, 8, 8, 8,
  2,
  8, 8, 8, 8,
  8, 8, 8, 16, 16,
  8, 8, 8, 8,
  4, 4
};

// We wish you a merry Christmas

int wish_melody[] = {
  NOTE_B3, 
  NOTE_F4, NOTE_F4, NOTE_G4, NOTE_F4, NOTE_E4,
  NOTE_D4, NOTE_D4, NOTE_D4,
  NOTE_G4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_F4,
  NOTE_E4, NOTE_E4, NOTE_E4,
  NOTE_A4, NOTE_A4, NOTE_B4, NOTE_A4, NOTE_G4,
  NOTE_F4, NOTE_D4, NOTE_B3, NOTE_B3,
  NOTE_D4, NOTE_G4, NOTE_E4,
  NOTE_F4
};

int wish_tempo[] = {
  4,
  4, 8, 8, 8, 8,
  4, 4, 4,
  4, 8, 8, 8, 8,
  4, 4, 4,
  4, 8, 8, 8, 8,
  4, 4, 8, 8,
  4, 4, 4,
  2
};

// Santa Claus is coming to town

int santa_melody[] = {
  NOTE_G4,
  NOTE_E4, NOTE_F4, NOTE_G4, NOTE_G4, NOTE_G4,
  NOTE_A4, NOTE_B4, NOTE_C5, NOTE_C5, NOTE_C5,
  NOTE_E4, NOTE_F4, NOTE_G4, NOTE_G4, NOTE_G4,
  NOTE_A4, NOTE_G4, NOTE_F4, NOTE_F4,
  NOTE_E4, NOTE_G4, NOTE_C4, NOTE_E4,
  NOTE_D4, NOTE_F4, NOTE_B3,
  NOTE_C4
};

int santa_tempo[] = {
  8,
  8, 8, 4, 4, 4,
  8, 8, 4, 4, 4,
  8, 8, 4, 4, 4,
  8, 8, 4, 2,
  4, 4, 4, 4,
  4, 2, 4,
  1
};

PLSHEAL::PLSHEAL (int pin) {
  myPin = pin;
  pinMode(myPin, OUTPUT);
} 

void PLSHEAL::playFirstSong(int pin, int pin2, int pin3, int pin4) {
  for(int i=0; i < (sizeof(melody) / 2); i++) {
    int noteDuration = 1000 / tempo[i];
    tone(pin, melody[i], noteDuration);
    analogWrite(pin2, map(melody[i], 500, 800, 50, 100));
    analogWrite(pin3, map(melody[i], 500, 800, 0, 255));
    delay(noteDuration * 1.5);
  }
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  delay(500);
}

void PLSHEAL::playSecondSong(int pin, int pin2, int pin3, int pin4) {
  for(int i=0; i < (sizeof(wish_melody) / 2); i++) {
    int noteDuration = 1000 / wish_tempo[i];
    tone(pin, wish_melody[i], noteDuration);
    analogWrite(pin3, map(wish_melody[i], 200, 500, 0, 255));
    analogWrite(pin4, map(wish_melody[i], 200, 500, 50, 100));
    delay(noteDuration * 1.5);
  }
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);
  delay(500);
}

void PLSHEAL::playThirdSong(int pin, int pin2, int pin3, int pin4) {
  for(int i=0; i < (sizeof(santa_melody) / 2); i++) {
    int noteDuration = 1000 / santa_tempo[i];
    tone(pin, santa_melody[i], noteDuration);
    analogWrite(pin2, map(santa_melody[i], 200, 600, 50, 100));
    analogWrite(pin4, map(santa_melody[i], 200, 600, 0, 255));
    delay(noteDuration * 1.5);
  }
  digitalWrite(pin2, LOW);
  digitalWrite(pin4, LOW);
  delay(500);
}
