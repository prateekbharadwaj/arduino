//RED 9;
//BLUE 10;
//WHITE 11; 

#include "pitches.h"

//notes in the melody
int melody[] = {
  NOTE_C4, NOTE_C4, NOTE_D4, NOTE_C4, NOTE_F4, NOTE_E4, NOTE_C4, NOTE_C4, NOTE_D4, NOTE_C4, NOTE_G4, NOTE_F4, NOTE_C4, NOTE_C4, NOTE_C5, NOTE_A4, NOTE_F4, NOTE_E4, NOTE_D4, NOTE_AS4, NOTE_AS4, NOTE_A4, NOTE_F4, NOTE_G4, NOTE_F4
};

//note durations: 4 = quarter note, 8 = eight note, etc.
int noteDurations[] = {
  8, 8, 4, 4, 4, 2, 8, 8, 4, 4, 4, 2, 8, 8, 4, 4, 4, 4, 4, 8, 8, 4, 4, 4, 2, 
};

void setup() {
  pinMode (9, OUTPUT);
  pinMode (10, OUTPUT);
  pinMode (11, OUTPUT);
  
  for (int thisNote = 0 ; thisNote < 25 ; thisNote++) { 
    int randomLight1 = random(9, 12);
    int randomLight2 = random(9, 12);
    int randomLight3 = random(9, 12);
    
    digitalWrite (randomLight1, HIGH);
    digitalWrite (randomLight2, HIGH);
    
    digitalWrite (randomLight3, LOW);
    //digitalWrite (random(9, 12), LOW);
    
    int noteDuration = 1130/noteDurations[thisNote];
    tone (3, melody[thisNote], noteDuration);
    
    int pause = noteDuration * 1.275;
    delay (pause);
    
    noTone(3);

    
  }

  delay(3000);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    
}

void loop() {
  //no need to repeat

}
