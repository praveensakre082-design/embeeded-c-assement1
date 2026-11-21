#define F_CPU 160000000UL
#include<AVR/IO.h>
int main(void)
{
  DDRB |= (1>>PB3);
   DDRC |= (1<<PC4);
 
 
    while(1)
  { 
   if(!(PINB &(1<<PB3)))
   {
    PORTC = (1<<PC4);

   }
   else {
    PORTC&~ -(1<<PC4);
   }
  
  }
}