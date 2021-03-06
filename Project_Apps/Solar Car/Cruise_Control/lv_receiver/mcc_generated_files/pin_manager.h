/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.26
        Device            :  PIC18F26K80
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RA5 procedures
#define RA5_SetHigh()    do { LATAbits.LATA5 = 1; } while(0)
#define RA5_SetLow()   do { LATAbits.LATA5 = 0; } while(0)
#define RA5_Toggle()   do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define RA5_GetValue()         PORTAbits.RA5
#define RA5_SetDigitalInput()   do { TRISAbits.TRISA5 = 1; } while(0)
#define RA5_SetDigitalOutput()  do { TRISAbits.TRISA5 = 0; } while(0)
#define RA5_SetAnalogMode() do { ANCON0bits.ANSEL4 = 1; } while(0)
#define RA5_SetDigitalMode()do { ANCON0bits.ANSEL4 = 0; } while(0)

// get/set IO_123 aliases
#define IO_123_TRIS               TRISAbits.TRISA6
#define IO_123_LAT                LATAbits.LATA6
#define IO_123_PORT               PORTAbits.RA6
#define IO_123_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define IO_123_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define IO_123_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define IO_123_GetValue()           PORTAbits.RA6
#define IO_123_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define IO_123_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)

// get/set DISPLAY aliases
#define DISPLAY_TRIS               TRISBbits.TRISB0
#define DISPLAY_LAT                LATBbits.LATB0
#define DISPLAY_PORT               PORTBbits.RB0
#define DISPLAY_WPU                WPUBbits.WPUB0
#define DISPLAY_ANS                ANCON1bits.ANSEL10
#define DISPLAY_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define DISPLAY_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define DISPLAY_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define DISPLAY_GetValue()           PORTBbits.RB0
#define DISPLAY_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define DISPLAY_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define DISPLAY_SetPullup()      do { WPUBbits.WPUB0 = 1; } while(0)
#define DISPLAY_ResetPullup()    do { WPUBbits.WPUB0 = 0; } while(0)
#define DISPLAY_SetAnalogMode()  do { ANCON1bits.ANSEL10 = 1; } while(0)
#define DISPLAY_SetDigitalMode() do { ANCON1bits.ANSEL10 = 0; } while(0)

// get/set FAN aliases
#define FAN_TRIS               TRISBbits.TRISB1
#define FAN_LAT                LATBbits.LATB1
#define FAN_PORT               PORTBbits.RB1
#define FAN_WPU                WPUBbits.WPUB1
#define FAN_ANS                ANCON1bits.ANSEL8
#define FAN_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define FAN_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define FAN_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define FAN_GetValue()           PORTBbits.RB1
#define FAN_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define FAN_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define FAN_SetPullup()      do { WPUBbits.WPUB1 = 1; } while(0)
#define FAN_ResetPullup()    do { WPUBbits.WPUB1 = 0; } while(0)
#define FAN_SetAnalogMode()  do { ANCON1bits.ANSEL8 = 1; } while(0)
#define FAN_SetDigitalMode() do { ANCON1bits.ANSEL8 = 0; } while(0)

// get/set HORN aliases
#define HORN_TRIS               TRISBbits.TRISB2
#define HORN_LAT                LATBbits.LATB2
#define HORN_PORT               PORTBbits.RB2
#define HORN_WPU                WPUBbits.WPUB2
#define HORN_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define HORN_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define HORN_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define HORN_GetValue()           PORTBbits.RB2
#define HORN_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define HORN_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define HORN_SetPullup()      do { WPUBbits.WPUB2 = 1; } while(0)
#define HORN_ResetPullup()    do { WPUBbits.WPUB2 = 0; } while(0)

// get/set RADIO aliases
#define RADIO_TRIS               TRISCbits.TRISC1
#define RADIO_LAT                LATCbits.LATC1
#define RADIO_PORT               PORTCbits.RC1
#define RADIO_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define RADIO_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define RADIO_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define RADIO_GetValue()           PORTCbits.RC1
#define RADIO_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define RADIO_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)

// get/set TELEM aliases
#define TELEM_TRIS               TRISCbits.TRISC2
#define TELEM_LAT                LATCbits.LATC2
#define TELEM_PORT               PORTCbits.RC2
#define TELEM_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define TELEM_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define TELEM_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define TELEM_GetValue()           PORTCbits.RC2
#define TELEM_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define TELEM_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)

// get/set LIGHTS aliases
#define LIGHTS_TRIS               TRISCbits.TRISC3
#define LIGHTS_LAT                LATCbits.LATC3
#define LIGHTS_PORT               PORTCbits.RC3
#define LIGHTS_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define LIGHTS_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define LIGHTS_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define LIGHTS_GetValue()           PORTCbits.RC3
#define LIGHTS_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define LIGHTS_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()    do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()   do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()   do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()         PORTCbits.RC6
#define RC6_SetDigitalInput()   do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()  do { TRISCbits.TRISC6 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()    do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()   do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()   do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()         PORTCbits.RC7
#define RC7_SetDigitalInput()   do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()  do { TRISCbits.TRISC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/