#ifndef F_CPU
#define F_CPU 16000000UL //16MHz clock speed
#endif


#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    //DDRB |= 0x20; //Set all pins in PORT B as Output (1 = output, 0 = input).
    DDRD = 1<<DDD4;
   // int i;
    //int j;
    while(1)
    {
        
       /* for(i = 0; i < 100; i++){
            PORTD = 1<<PD4;
            PORTB |= 0x20; //Turn on all LEDs
            for(j = 0; j < i; j++){
            _delay_ms(1.0); //1 second delay
            }
            PORTD = 0x00;
            PORTB ^= 0x20; //Turn off all LEDs
            for(j = 0; j < i; j++){
            _delay_ms(1.0); //1 second delay
            }
       }*/ 
        PORTD ^= 1<<PD4;
        _delay_ms(500.0);
       
        
    }
}


