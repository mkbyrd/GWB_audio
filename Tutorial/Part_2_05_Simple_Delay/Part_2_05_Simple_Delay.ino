// Advanced Microcontroller-based Audio Workshop
//
// http://www.pjrc.com/store/audio_tutorial_kit.html
// https://hackaday.io/project/8292-microcontroller-audio-workshop-had-supercon-2015
// 
// Part 2-5: Simple Delay

#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioInputI2S            i2s2;           //xy=285,317
AudioEffectDelay         delay1;         //xy=506,388
AudioMixer4              mixer1;         //xy=682,368
AudioMixer4              mixer2;         //xy=694,456
AudioMixer4              mixer3;         //xy=919,332
AudioOutputI2S           i2s1;           //xy=1209,347
AudioConnection          patchCord1(i2s2, 0, mixer3, 0);
AudioConnection          patchCord2(i2s2, 1, delay1, 0);
AudioConnection          patchCord3(delay1, 0, mixer1, 0);
AudioConnection          patchCord4(delay1, 1, mixer1, 1);
AudioConnection          patchCord5(delay1, 2, mixer1, 2);
AudioConnection          patchCord6(delay1, 3, mixer1, 3);
AudioConnection          patchCord7(delay1, 4, mixer2, 0);
AudioConnection          patchCord8(delay1, 5, mixer2, 1);
AudioConnection          patchCord9(delay1, 6, mixer2, 2);
AudioConnection          patchCord10(delay1, 7, mixer2, 3);
AudioConnection          patchCord11(mixer1, 0, mixer3, 1);
AudioConnection          patchCord12(mixer2, 0, mixer3, 2);
AudioConnection          patchCord13(mixer3, 0, i2s1, 0);
AudioConnection          patchCord14(mixer3, 0, i2s1, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=644,657
// GUItool: end automatically generated code





void setup() {
  Serial.begin(9600);
  AudioMemory(160);
  sgtl5000_1.enable();
  sgtl5000_1.volume(0.6);
  sgtl5000_1.inputSelect(AUDIO_INPUT_MIC);
  sgtl5000_1.micGain(36);
  mixer1.gain(0, 0.2);
  mixer1.gain(1, 0.2);
  mixer1.gain(2, 0.2);
  mixer1.gain(3, 0.2);
  mixer2.gain(0, 0.2);
  mixer2.gain(1, 0.2);
  mixer2.gain(2, 0.2);
  mixer2.gain(3, 0.2);
  mixer3.gain(0, 0.0); // default = do not listen to direct signal
  mixer3.gain(1, 1.0); // ch1 is output of mixer1
  mixer3.gain(2, 1.0); // ch2 is output of mixer2
  delay1.delay(0, 400);
  delay1.delay(1, 400);
  delay1.delay(2, 400);
  delay1.delay(3, 400);
  delay1.delay(4, 400);
  delay1.delay(5, 400);
  delay1.delay(6, 400);
  delay1.delay(7, 400);
  delay(1000);
}

void loop() {
  // do nothing
}




