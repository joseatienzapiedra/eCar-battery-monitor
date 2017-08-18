#ifndef F_CPU
#define F_CPU 20000000UL 
#endif


#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRD = 0xFF; //All PORTD as Output
	while(1)
	{
		PORTD = 0xFF; 
		_delay_ms(200); 
		PORTD= 0x00; 
		_delay_ms(200); 
	}
}