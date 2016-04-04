//Includes
#include <avrio.h>
#include <util/delay.h>

void initDDRB () {
  DDRB |= 0x01;
}

int main () {
  initDDRB(0xFF);
  while (1){
    PORTB ^= 0x01;
    _delay_ms(500);
  }
}
