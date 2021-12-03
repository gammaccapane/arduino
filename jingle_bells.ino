/*
Let's play some music with Arduino
Author: Istituto Comprensivo Camera
Open Your Doors To Digital Age 
*/

// label to define the buzzer Pin
#define buzzerPin 3  

// define the notes frequency 

#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988

// Jingle Bells
// notes array
int notes[] = {
  NOTE_E5, NOTE_E5, NOTE_E5,
  NOTE_E5, NOTE_E5, NOTE_E5,
  NOTE_E5, NOTE_G5, NOTE_C5, NOTE_D5,
  NOTE_E5,
  NOTE_F5, NOTE_F5, NOTE_F5, NOTE_F5,
  NOTE_F5, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_E5,
  NOTE_E5, NOTE_D5, NOTE_D5, NOTE_E5,
  NOTE_D5, NOTE_G5
};

// define an array holding the duration of a note
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




void setup() {
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  for(int i = 0; i < 26; i++) {
    Serial.println('Jingle Bells');
    int duration = (1000/tempo[i])* 1.50;
    tone(buzzerPin, notes[i], duration);
    delay(duration);
    noTone(buzzerPin);
    //tone(buzzerPin,0, duration);
    
  }
}

