# Arduino-Controlled LED-LDR Guitar Tremolo Pedal

A simple, low-cost guitar tremolo effect pedal. An Arduino Nano flashes
an LED at a speed set by a potentiometer, and an LDR (light-dependent
resistor) placed next to the LED varies the guitar signal in time with
the light. Built as a personal project, entirely from parts I already
had.

## Overview
This project started with a song. I loved the guitar effect in
"Boulevard of Broken Dreams" by Green Day and wanted to recreate that
pulsing sound myself, so I built a tremolo pedal.

Many tremolo pedal circuits I found online were complicated and used a
555 timer. I simplified the idea with a digital approach: a
microcontroller handles the timing, and a simple LDR circuit handles
the audio. The result is a cheap, easy-to-build pedal.

## How It Works
1. The Arduino Nano flashes an LED connected to pin D6 on and off.
2. A potentiometer sets the flash rate, from about 1 to 16 flashes per
   second.
3. The LED and the LDR are coupled together with black plastic or tape,
   so the LDR sees only the LED's light and not the room light.
4. The LDR's resistance changes with the LED's brightness. The LDR is
   connected in series with a 10k resistor in the audio path: the guitar
   signal goes in on one side, and the output goes to the amplifier
5. As the LED flashes, the signal level rises and falls, producing the
   tremolo effect. A faster flash rate gives a faster tremolo.

## Components
- Arduino Nano
- Potentiometer
- A white LED with current-limiting resistor
- LDR (light-dependent resistor)
- 10k resistor
- Black plastic or tape (to couple the LED and LDR and block ambient light)
- Breadboard, jumper wires, guitar input and amplifier output connections

## Code
The Arduino sketch reads the potentiometer on A0, converts it into a
delay time (30 ms to 500 ms), and switches the LED on and off with that
delay. See `tremolo/tremolo.ino`.

## Testing and Results
The circuit was tested on a breadboard with an oscilloscope. It achieved
close to the intended tremolo effect and works as a cheap, easy-to-build
pedal using common parts.

## Demo
[Link to video demo, oscilloscope video, or audio sample]

## Screenshots
<img width="624" height="307" alt="Circuit Diagram" src="https://github.com/user-attachments/assets/ef6c321d-2288-4327-b630-0fcfb6ad446c" />

## Limitations and Future Improvements
- Testing was done on a breadboard, so the circuit picks up some noise.
  Building it on a PCB would reduce the noise and make it a more
  finished pedal.
- The LED switches fully on and off, so the effect is more pulsing than
  the smooth wobble of a classic tremolo. The LDR's slow response
  softens the edges a little. Fading the LED smoothly would give a
  smoother tremolo.

## Repository Contents
- `tremolo/tremolo.ino` - Arduino code for the LED flash rate
- `images/` - circuit diagram and oscilloscope captures

## Author
Zain Rizwan - Electrical Engineer<br>
Personal project (2023)
