// Libraries for register names and the delay function
#include <avr/io.h>
#include <util/delay.h>

// Macros to make bit manipulation easier
#define set_bit(address,bit) (address |= (1<<bit))
#define clear_bit(address,bit) (address &= ~(1<<bit))
#define toggle_bit(address,bit) (address ^= (1<<bit))

// This macro is for checking if a certain bit is set in a given register.
// This is useful here for checking the status of individual input pins.
#define check_bit(address,bit) ((address & (1<<bit)) == (1<<bit))

int main(void)
{
    // Initiates PD5 and PD6 as OUTPUT
    set_bit(DDRD,5);
    set_bit(DDRD,6);

    // Sets PF0 as input with pullup resistor
    clear_bit(DDRF,0); 
    set_bit(PORTF,0);

    while(1)
    {
        // PINF is the register you have to read to check if a particular
        // pin on port F (PFx) is HIGH or LOW
        if(check_bit(PINF,0))
        {
            // If PF0 is HIGH, toggle pin PD5's output status
            toggle_bit(PORTD,5);
        }
        else
        {
            // If PF0 is LOW, toggle pin PD6's output status
            toggle_bit(PORTD,6);
        }

        _delay_ms(1000); // Delay 1 second before checking PF0 again

    }

    return 0;
}
