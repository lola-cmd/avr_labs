#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

void led_init(void);
void led_off(uint8_t led);
void led_on(uint8_t led);
void led_toggle(uint8_t led);



int main()
{
	
	led_init();
	while(1)
	{
		int a = 1000;
		led_on(2);
		_delay_ms(a);
		led_off(2);
		_delay_ms(a);
	}

}

void led_init() {
	DDRB |= 0xff;
}

void led_off(uint8_t led) {
	PORTB &= ~(1 << led);
}

void led_on(uint8_t led) {
	PORTB |= (1 << led);
}

void led_toggle(uint8_t led) {
	PORTB ^= (1 << led);
}