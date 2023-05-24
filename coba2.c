#include <mega8535.h>
#include <delay.h>

void main(void)
{
PORTA=0xFF;
DDRA=0x00;
DDRD=0xFF;
PORTC=0x00;
DDRC=0x00;
PORTD=0x00;
DDRD=0xFF;
 
while (1)
      {
      // Place your code here
        if (PORTA.1==0)
        {
         PORTB.4=0;
         PORTB.3=0;
         PORTB.2=0;
         PORTB.1=1;
         
         delay_ms(1000);
         
         PORTB.4=0;
         PORTB.3=0;
         PORTB.2=1;
         PORTB.1=0;
         
         delay_ms(1000);
         
        }
        
        else if(PORTA.2==0)
        {
         PORTB.4=0;
         PORTB.3=1;
         PORTB.2=0;
         PORTB.1=0;
        } 
        
        else if(PORTA.3==0)
        {
         PORTB.4=1;
         PORTB.3=0;
         PORTB.2=0;
         PORTB.1=0;
        }
        
        else
        {
         PORTB.4=0;
         PORTB.3=0;
         PORTB.2=0;
         PORTB.1=0;
        }   
      }
}

