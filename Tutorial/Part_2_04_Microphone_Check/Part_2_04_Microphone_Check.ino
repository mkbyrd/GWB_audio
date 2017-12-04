// Advanced Microcontroller-based Audio Workshop
//
// http://www.pjrc.com/store/audio_tutorial_kit.html
// https://hackaday.io/project/8292-microcontroller-audio-workshop-had-supercon-2015
// 
// Part 2-4: Using The Microphone


#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioInputI2S            i2s2;           //xy=539,315
AudioOutputI2S           i2s1;           //xy=927,326
AudioConnection          patchCord1(i2s2, 0, i2s1, 0);
AudioConnection          patchCord2(i2s2, 0, i2s1, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=644,657
// GUItool: end automatically generated code





void setup() {
  Serial.begin(9600);
  AudioMemory(8);
  sgtl5000_1.enable();
  sgtl5000_1.volume(0.5);
  sgtl5000_1.inputSelect(AUDIO_INPUT_MIC);
  sgtl5000_1.micGain(100);
  delay(1000);
}

void loop() {
  // do nothing
}




