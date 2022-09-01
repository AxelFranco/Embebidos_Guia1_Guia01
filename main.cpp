/*! @mainpage Guia 1 Trabajos Practicos
 * @date Thursday, August 25, 2021
 */

#include "mbed.h"
#include "arm_book_lib.h"
#include <iostream>

int main()
{
    DigitalIn gasDetector(D2);

    DigitalOut alarmLed(LED1);

    gasDetector.mode(PullDown);

    alarmLed = OFF;

    int i = 0; /**< Declaro la variable i de tipo entero */

    while (true) {
        
        std::cout << "test " << ++i << std::endl; /**< Imprimo por consola test mas la variable i incrementada en uno */
        delay(500); /**< Espero medio segundo antes de volver a imprimir */

        /**
        * @note El delay lo pongo para poder ver los mensajes en la consola con mayor comodidad
        */

        if ( gasDetector == ON ) {
            alarmLed = ON;
        }
        
        if ( gasDetector == OFF ) {
            alarmLed = OFF;
        }
    }
}