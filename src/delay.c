
#include "stm32f4_discovery.h"
#include "delay.h"

/* A simple time consuming function.
 * For a more real-world one,
 * we would use timers and interrupts. */
void delay( uint32_t nCount)
{
    while(nCount--)
        __asm("nop"); // do nothing
}
