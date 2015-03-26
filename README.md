#dragon12-3dprinter
Software for a FreeScale microcontroller to run a 4-axis 3D printer. For Tennessee Tech's ME 4370, Intro to Mechatronics class.

##Subdivisions of 3D Printer Program

`main.c`  meat of program that calls predefined functions

`serial.h`  defines funcitons for talking to the computer

`interpreter.h`  functions to interpret the gcode and call appropriate funcitons

`homing.h`  functions to self-calibrate/return to home

`acceleration.h`

`line.h`  functions to drive to specific points
