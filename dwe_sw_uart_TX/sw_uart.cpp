#ifndef SW_UART_HEADER
#define SW_UART_HEADER

#include <Arduino.h>

struct due_sw_uart {
	int pin_tx;
	int baudrate;
	int stopbits;
	int paritybit;
  	int databits;
};