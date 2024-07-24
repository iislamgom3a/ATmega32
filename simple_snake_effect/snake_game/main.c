/*
 * 	main.c
 *  Author: Islam Gomaa
 *  Description: snake effect using 8 LEDS
 */

#include <stdint.h>
#include <util/delay.h>
#include <avr/io.h>
#define de 100
int main(void){
	for (int i =0; i< 8; i++) DDRA |= (1<<i);

	while(1){
		for(int i = 0; i < 8; i++ ){
			PORTA |= (1<<i);
			_delay_ms(de);
		}

		for(int i = 0; i < 8; i++ ){
			PORTA &= ~(1 << i);
			_delay_ms(de);
		}
	}
	return 0;
}


