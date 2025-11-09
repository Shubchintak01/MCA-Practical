#include <reg51.h>   // Header file for 8051 microcontroller

#define LED_PORT P2   // 8 LEDs connected to Port 2

void delay_ms(unsigned int ms) {
    unsigned int i, j;
    for(i = 0; i < ms; i++)
        for(j = 0; j < 1275; j++);   // Roughly 1 ms delay for 12 MHz crystal
}

void main() {
    while(1) {
        // Glow even-numbered LEDs: 2, 4, 6, 8 (binary 10101010)
        LED_PORT = 0xAA;      // 0xAA = 10101010b
        delay_ms(500);

        // Glow odd-numbered LEDs: 1, 3, 5, 7 (binary 01010101)
        LED_PORT = 0x55;      // 0x55 = 01010101b
        delay_ms(500);
    }
}
