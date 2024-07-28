/*
 * 	main.c
 *  Author: Islam Gomaa
 *  Description: snake effect using 8 LEDS
 */

#include <stdint.h>
#include <util/delay.h>

#define DDRA  *((uint8_t*)0x3A)
#define PORTA  *((uint8_t*)0x3B)
#define PINA *((volatile uint8_t*)0x39)

#define de 100
int main(void){
	DDRA =0xff;
	uint8_t i =0;;
	while(1){
		for(i = 0; i < 8; i++ ){
			PORTA |= (1<<i);
			_delay_ms(de);
		}

		for(i = 0; i < 8; i++ ){
			PORTA &= ~(1 << i);
			_delay_ms(de);
		}
	}
	return 0;
}


