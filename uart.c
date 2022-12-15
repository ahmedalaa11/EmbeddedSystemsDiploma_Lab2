#include "uart.h"

#define UART0_DR *((volatile unsigned int* const)((unsigned int*)0x101f1000))

void UART_TX_string(unsigned char *ptr){

while(*ptr!=0){
    UART0_DR =(unsigned int)(*ptr);
    ptr++;
}
}