// Use wu_ticks() to get a tick count (think of it as a clock).
// Toggle output 2 every 100 ticks.
//
// Try three ways to determine the next time to toggle the output:
// current_time - start_time < 100
// current_time < 100 + start_time
// current_time - 100 < start_time
// From an algebraic point of view those are the same, but
// implementation with a finite range can make a difference.
//
// Document your findings here in a comment:
//
// NAME: xxxxxxx
// Findings:
// xxxxxxxxxxx xxxx xxxxxxx
// ........

#include "wu_ticks.h"

const int led_pin = 2;
uint8_t start_time;
bool pin_state = true;

void setup() {
  pinMode(led_pin, OUTPUT);
  digitalWrite(led_pin, pin_state);
  start_time = wu_ticks();
}

void loop() {
  uint8_t current_time = wu_ticks();
  // insert check an toggle only if needed, update
  // start_time accordingly
  
  digitalWrite(led_pin, pin_state);
if ((uint8_t)(current_time - start_time) > 100)
    pin_state = !pin_state;
{digitalWrite(led_pin ,pin_state);
    start_time += 100;
    }











}
