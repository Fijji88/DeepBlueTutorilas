#ifndef F_CPU
#define F_CPU 16000000UL //16MHz clock speed
#endif

// Pins

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    //Init
    DDRD = 1<<DDD4; //Set pin 4 as output
    PORTD &= ~(1<<PD4); //Set pin 4 low
    PORTB = 1<<PB0;//Set Pull Up Resistor on pin 6

    
    while(1)
    {
       if(((PINB & (1 << PB0)) == 0) && ((PIND & (1 << PD4)) == 0)){

          PORTD |= (1<<PD4); 
          _delay_ms(500.0);
        }

        if(((PINB & (1 << PB0)) == 0) && ((PIND & (1 << PD4)) == (1 << PD4))){

         PORTD &= ~(1<<PD4); 
         _delay_ms(500.0);
        }
    }
}


