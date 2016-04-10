//Includes
#include <avr/io.h>
#include <util/delay.h>

//This function will setup DDRB for output on PB0
//Attach an LED and Resistor to PB0 on 32u4
void initDDRB () {
  DDRB |= 0x01;
}

int main () {
  //Setup
  initDDRB();    //Calls for setup of PB0
  
  //Loop
  while (1){
    PORTB ^= 0x01; //Makes PBO blink an led.
    _delay_ms(500); 
  }
}
