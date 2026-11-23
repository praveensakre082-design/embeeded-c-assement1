#include<AVR/IO.h>
int main(void)
{
  DDRB |= ( 1<<PB3);
  DDRB |=  ( 1<<PB3) | (1<<PB7);
  DDRC |=(1<<PC5);
  DDRC |=(1<<PC4);

  while(1)
  {
   
  if (PINC5 & (1<<PC5))
  {
  if(PINB3 & (1<<PB3))
  
   {
    PORTB |=(1<<PB3);
    PORTB |=(1<<PB7);

   }
   else
   {

    PORTB&~ -(1<<PB3);
    PORTB&~ -(1<<PB7);
   }
  }
  if(PINC4 & 1<<PC4)
  {
     PORTB |=(1<<PB3);
    PORTB |=(1<<PB7);
    _delay_ms(100);
      PORTB&~ -(1<<PB3);
    PORTB&~ -(1<<PB7);

  }

  }
}




