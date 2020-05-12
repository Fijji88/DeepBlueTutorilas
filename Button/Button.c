#ifndef F_CPU
#define F_CPU 16000000UL //16MHz clock speed
#endif

// Pins
#define BUTTON1 PIND6


#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    
    DDRD = 1<<DDD4;
    PORTD |= (1<<PD6);//Set Pull Up Resistor
    while(1)
    {
        if(!PIND6){

           PORTD |= (1<<PD4); 
        }
        else
           PORTD |= ~(1<<PD4); 

    }
}


