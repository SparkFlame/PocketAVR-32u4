// Libraries for register names and the delay function
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    // Initiates PD5 and PD6 as OUTPUT
    DDRD |= (1 << DDD5);

    // Sets PF0 as input with pullup resistor
    DDRF &= ~(1 << PF0);
    PORTF |= (1 << PORTF0);

    while(1)
    {
        // PINF is the register you have to read to check if a particular
        // pin on port F is HIGH or LOW
        if((PINF & (1 << PINF0)) == 0)
        {
            // If PF0 is HIGH, toggle pin PD5's output status
            PORTD ^= (1<<PORTD5)
        }

        _delay_ms(1000); // Delay 1 second before checking PF0 again

    }

    return 0;
}
