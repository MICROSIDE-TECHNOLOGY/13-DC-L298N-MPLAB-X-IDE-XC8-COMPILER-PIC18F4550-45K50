/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.6
        Device            :  PIC18F45K50
        Driver Version    :  2.00
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

#include "mcc_generated_files/mcc.h"

int SUBE = 1;                                 // Variable para control de ascenso y descenso del valor del PWM
uint16_t VELOCIDAD = 0;

void main( void )
{
    SYSTEM_Initialize();                      // Inicializa el sistema

    while ( 1 ) {
        IN_1_SetHigh();
        IN_2_SetLow();

        SUBE = 1;

        while ( VELOCIDAD < 1020 && SUBE ) {
            VELOCIDAD += 5;                   // Se incrementa en pasos de 15 el ciclo de trabajo
            EPWM1_LoadDutyValue( VELOCIDAD ); // Salida Pin_C2
            __delay_ms( 40 );                 // Cada 40 mili segundo
        }

        SUBE = 0;

        while ( VELOCIDAD > 5 && !SUBE ) {
            VELOCIDAD -= 5;                   // Se reduce en pasos de 15 el ciclo de trabajo
            EPWM1_LoadDutyValue( VELOCIDAD ); // Salida Pin_C2
            __delay_ms( 40 );
        }

        SUBE = 1;

        IN_1_SetLow();
        IN_2_SetLow();

        __delay_ms( 1000 );

        IN_1_SetLow();
        IN_2_SetHigh();

        SUBE = 1;

        while ( VELOCIDAD < 1020 && SUBE ) {

            VELOCIDAD += 5;                   // Se incrementa en pasos de 15 el ciclo de trabajo
            EPWM1_LoadDutyValue( VELOCIDAD ); // Salida Pin_C2
            __delay_ms( 40 );                 // Cada 40 mili segundo
        }

        SUBE = 0;

        while ( VELOCIDAD > 5 && !SUBE ) {
            VELOCIDAD -= 5;                   // Se reduce en pasos de 15 el ciclo de trabajo
            EPWM1_LoadDutyValue( VELOCIDAD ); // Salida Pin_C2
            __delay_ms( 40 );
        }

        SUBE = 1;

        IN_1_SetLow();
        IN_2_SetLow();
    }
}
/**
 End of File
 */