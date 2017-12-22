/**
 *******************************************************************
 *  Lesson 1 - "Hello World"
 *
 *  The LEDs are connected to input-outpins (I/O) RC0 through RC3. First, the I/O pin
 *  must be configured for an output. In this case, when one of these pins is driven high
 *  (RC0 =  1 ), the LED will turn on. These two logic levels are derived from the power pins
 *  of the PIC MCU. Since the PIC device?s power pin (VDD) is connected to 5V and the
 *  source (VSS) to ground (0V), a '1' is equivalent to 5V, and a '0' is 0V.
 *
 *
 *  This turns on DS1 LED on the Low Pin Count Demo Board.
 *
 *  PIC: 16F1829
 *  Compiler: XC8 v1.00
 *  IDE: MPLABX v1.10
 *
 *  Board: PICkit 3 Low Pin Count Demo Board
 *  Date: 6.1.2012
 *
 * *******************************************************************
 * See Low Pin Count Demo Board User's Guide for Lesson Information*
 * ******************************************************************
 */


// PIC16F886 Configuration Bit Settings

// 'C' source line config statements

// CONFIG1
#pragma config FOSC = INTRC_CLKOUT// Oscillator Selection bits (INTOSC oscillator: CLKOUT function on RA6/OSC2/CLKOUT pin, I/O function on RA7/OSC1/CLKIN)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled and can be enabled by SWDTEN bit of the WDTCON register)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config MCLRE = ON       // RE3/MCLR pin function select bit (RE3/MCLR pin function is MCLR)
#pragma config CP = OFF         // Code Protection bit (Program memory code protection is disabled)
#pragma config CPD = OFF        // Data Code Protection bit (Data memory code protection is disabled)
#pragma config BOREN = ON       // Brown Out Reset Selection bits (BOR enabled)
#pragma config IESO = ON        // Internal External Switchover bit (Internal/External Switchover mode is enabled)
#pragma config FCMEN = ON       // Fail-Safe Clock Monitor Enabled bit (Fail-Safe Clock Monitor is enabled)
#pragma config LVP = ON         // Low Voltage Programming Enable bit (RB3/PGM pin has PGM function, low voltage programming enabled)

// CONFIG2
#pragma config BOR4V = BOR40V   // Brown-out Reset Selection bit (Brown-out Reset set to 4.0V)
#pragma config WRT = OFF        // Flash Program Memory Self Write Enable bits (Write protection off)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#include <xc.h>


//config bits that are part-specific for the PIC16F1829
//__CONFIG(FOSC_INTOSC & WDTE_OFF & PWRTE_OFF & MCLRE_OFF & CP_OFF & CPD_OFF & BOREN_ON & CLKOUTEN_OFF & IESO_OFF & FCMEN_OFF);
//__CONFIG(WRT_OFF & PLLEN_OFF & STVREN_OFF & LVP_OFF);

    /* -------------------LATC-----------------
     * Bit#:  -7---6---5---4---3---2---1---0---
     * LED:   ---------------|DS4|DS3|DS2|DS1|-
     *-----------------------------------------
     */

                                            //Every program needs a `main` function
void main(void) {
    //TRISCbits.TRISC0 = 0;                   //using pin as output
    //LATC = 0;                               //clear all pins to 0
    //LATCbits.LATC0 = 1;                     //turn ON the LED by writing to the latch
    while(1) continue;                      //sit here forever doing nothing, think "while(true), continue in this loop"

}