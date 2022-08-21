//=============================================================================
// File Name : my_lib.h
//=============================================================================

// UART.c
extern void Uart_Init(int baud);
extern void Uart_Printf(char *fmt,...);
extern void Uart_Send_Byte(int data);
extern void Uart_Send_String(char *pt);
