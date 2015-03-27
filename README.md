#dragon12-3dprinter
Software for a FreeScale microcontroller to run a 4-axis 3D printer. For Tennessee Tech's ME 4370, Intro to Mechatronics class. This is written for the CodeWarrior C++ compiler.

##Subdivisions of 3D Printer Program - Branches

Note: each branch should have a `main.c` and any other header files you, yourself, have created.

`master`  the branch all the other branches will eventually merge into

`serial`  the branch that defines funcitons for talking to the computer over serial (maybe in a separate serial.h file)

`interpreter`  the branch that works with translating the gcode into funciton calls (some of this might end up in main.c)

`homing`  the branch that defines functions for self-calibrate/return to home

`movement`  the branch that defines functions for moving the head
