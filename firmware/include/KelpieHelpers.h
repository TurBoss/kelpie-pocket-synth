// HELPER FUNCTIONS USED ACROSS VARIOUS CLASSES AND IN MAIN CODE

#ifndef Kelpie_Helpers_h
#define Kelpie_Helpers_h

#include <Arduino.h>
#include <keyMappings.h>
#include <Audio.h>
#include <voices.h>
#include <HardwareInputs.h>
#include <globalSynthState.h>
#include <contants.h>
#include <freqKnobLookup.h>

extern const byte numPolyVoices;
extern polyVoice polyVoices[];
extern polyVoice monoVoices[];
extern synthState globalState;
extern boolean prevButtonsState[];
extern AudioAmplifier amp1;
extern AudioSynthWaveformSine LFO;
extern AudioMixer4 LFO_MIXER_AMP;
extern const byte MONOBUFFERSIZE;
extern byte monoBuffer[];

void activateVoice(byte index, byte note, float frequency, float gain);
void decactivateVoices(byte index);
void playNoteMono(byte playMode, byte note, byte velocity);
float glideNotes(byte newNote, byte prevNote);
void bufferShift(byte indexToRemove, byte currentIndexPlaying);
void keyBuffMono(byte note, byte velocity, boolean isNoteOn);
void keyBuffPoly(byte note, byte velocty, boolean playNote);
void handleButtonPress(boolean *buttonState);
void handleKnobChange(pot knob);
float calculateOscConstant(float osc1Vol, float osc2Vol, float noiseVol);
void setWaveformLevels(float osc1Vol, float osc2Vol, float noiseVol, float oscConstant);
float calculateDetuneValue(int knobReading);

#endif