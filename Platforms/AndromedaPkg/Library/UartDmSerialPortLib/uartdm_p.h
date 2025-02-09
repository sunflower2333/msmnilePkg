#ifndef _UARTDM_PRIVATE_H
#define _UARTDM_PRIVATE_H

#include "uart_dm.h"

int  uart_putc(char c);
int  uart_getc(uint8_t *byte, bool wait);
int  uart_tstc(void);

#endif // _UARTDM_PRIVATE_H
