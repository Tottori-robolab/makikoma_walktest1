#if defined(ARDUINO) && ARDUINO >= 100
#include <Arduino.h>
#else
#include <WProgram.h>
#endif

#ifndef legseter_h
#define legseter_h

void legstay();
void legready();
void legmove1(uint16_t pulselen);
void legmove2(uint16_t pulselen);
void legmove3(uint16_t pulselen);
void legmove4(uint16_t pulselen);

#endif
