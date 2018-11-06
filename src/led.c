#include <avr/io.h>
#include "led.h"

void led_configure() {
	DDRB |= (1 << PB5);
}

void led_invert() {
    PORTB ^= (1 << PB5);
}
