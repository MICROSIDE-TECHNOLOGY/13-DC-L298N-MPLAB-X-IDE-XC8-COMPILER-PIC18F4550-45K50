/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.6
        Device            :  PIC18F45K50
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.30 and above
        MPLAB 	          :  MPLAB X 5.40	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IN_1 aliases
#define IN_1_TRIS                 TRISCbits.TRISC0
#define IN_1_LAT                  LATCbits.LATC0
#define IN_1_PORT                 PORTCbits.RC0
#define IN_1_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define IN_1_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define IN_1_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define IN_1_GetValue()           PORTCbits.RC0
#define IN_1_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define IN_1_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)

// get/set IN_2 aliases
#define IN_2_TRIS                 TRISCbits.TRISC1
#define IN_2_LAT                  LATCbits.LATC1
#define IN_2_PORT                 PORTCbits.RC1
#define IN_2_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define IN_2_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define IN_2_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define IN_2_GetValue()           PORTCbits.RC1
#define IN_2_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define IN_2_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)

// get/set RC2 procedures
#define RC2_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define RC2_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define RC2_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define RC2_GetValue()              PORTCbits.RC2
#define RC2_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define RC2_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define RC2_SetAnalogMode()         do { ANSELCbits.ANSC2 = 1; } while(0)
#define RC2_SetDigitalMode()        do { ANSELCbits.ANSC2 = 0; } while(0)

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