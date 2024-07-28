/*
 * 	main.c
 *  Author: Islam Gomaa
 *  Description: pettern using 8 LEDS
 */

#include <stdint.h>
#include <util/delay.h>

#define DDRA  *((uint8_t*)0x3A)
#define PORTA  *((uint8_t*)0x3B)
#define PINA *((volatile uint8_t*)0x39)
#define de 140

int main(void){
	DDRA =0xff;
	uint8_t i = 0;
	while(1)
	{
		// Turn on LEDs from the outside to the center
		for (i = 0; i < 4; i++) {
			PORTA |= (1 << (3 - i)) | (1 << (4 + i));
			_delay_ms(de);
		}
		// Turn off LEDs from outside to the center
		for (i = 0; i < 4; i++) {
			PORTA &= ~((1 << (i)) | (1 << (7 - i)));
			_delay_ms(de);
		}
	}
	return 0;
}


