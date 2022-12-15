#include "uart.h"
char message[100]="Learn-In-Depth\n==AHMED ALAA==";
void main(void){
    
    unsigned char *ptr =message;
    UART_TX_string(ptr);

}