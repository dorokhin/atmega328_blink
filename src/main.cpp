#include <avr/io.h>
#include <util/delay.h>
#include "led.h"

int main ()
{
	led_configure();
	while(1) 
	{
		_delay_ms(990);
		led_invert();
		_delay_ms(10);
		led_invert();
	}
}
