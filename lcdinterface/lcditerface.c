#include<avr/io.h>
#define F_CPU 8000000
#include<util/delay.h>
#include<lcdavr.h>
void main()
{  DDRA=0x00;
   PORTA=(1<<PA7);
   DDRB=0xff;
   lcd_init();
   while(1)
   {  if((PINA & 0b10000000)==0)
       {lcd_clear();
	   lcd_command(0x80);
	   lcd_string("welcome");
	   lcd_command(0xc0);
	   lcd_string("all students");
	   _delay_ms(100);}
	   else
	   lcd_clear();

	   }
	   }
