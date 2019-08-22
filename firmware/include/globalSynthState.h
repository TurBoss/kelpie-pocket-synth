// DESCRIBES THE GLOBAL STATE, A DATATYPE TO STORE ALL GLOBAL VARIABLES ACCESSED ACROSS THE PROGRAM

#ifndef globalSynthState_h
#define globalSynthState_h

struct synthState
{
  int WAVEFORM1;
  int WAVEFORM2;
  bool isPoly;
  bool shift;
  float OSC1_VOL;
  float OSC2_VOL;
  float NOISE_VOL;
  float OSC_CONSTANT; // this is a multiplication factor that is calculated based on positions of O1 O2 and N, to ensure sum of gains is 1
  float PWM;
  float DETUNE;
  float PITCH_BEND;
  float LFO_FREQ;
  float LFO_MIXER_AMP;
  float AMP_ATTACK;
  float AMP_DECAY;
  float AMP_SUSTAIN;
  float AMP_RELEASE;
  float FILTER_ATTACK;
  float FILTER_DECAY;
  float FILTER_SUSTAIN;
  float FILTER_RELEASE;
  int FILTER_FREQ;
  float FILTER_Q;
  float FILTER_OCTAVE;
  int GLIDE_TIME;
  byte CURRENT_NOTE_MONO;
  byte PREV_NOTE_MONO;
  float MONO_BASE_NOTE_FREQ;
  float MASTER_VOL;
  float MASTER_VOL_COMPENSATION;
};

#endif