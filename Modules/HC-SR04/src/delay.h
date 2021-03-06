#ifndef __DELAY_H__
#define __DELAY_H__

#include <stdint.h>
#include <mcs51/8051.h>

#define __nop()             __asm nop __endasm
#define CLOCK_FREQUENCY     11.0592

void delay_ms(uint16_t t);

#endif
