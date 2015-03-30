/******************************************************************************************
 *                                                                                        *
 *   This defines functions for inputting and outputting strings over the serial port.    *
 *                                                                                        *
 *   Relevant info:                                                                       *
 *   http://reprap.org/wiki/G-code#Replies_from_the_RepRap_machine_to_the_host_computer   *
 *                                                                                        *
 ******************************************************************************************/


#include <stdtypes.h>
#include "rt_nonfinite.h"
#include "main.h"
#include "MCU.h"
#include <stdio.h>
#include "pll.h"
#include "math.h"
#include "sci0.h"

__interrupt void SCI0(void);


void main( void )
{
   char str[25];
   DDRA = 0xff;
   DDRJ = 0xff;

   PLL_init();
   LCD_init();
   asm cli;

   EnableInterrupts;
   
   SCI0_Init ( BAUD_38400 );
   
   PTJ = 0;

   while(1) {
      sprintf(str,"TestTESTtest");
      SCI0_OutString (str);

      PORTA = 0b00000000;
      msDelay(1000);
   }
}
