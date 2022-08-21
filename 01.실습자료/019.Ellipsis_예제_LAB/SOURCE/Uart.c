#include "2440addr.h"
#include "option.h"
#include "stdarg.h"

// DDI Layer
void Uart_Init(int baud);
int Uart_Printf(char *fmt,...);

// D/D Layer
void Uart_Send_Byte(int data);
void Uart_Send_String(char *pt);

void Uart_Send_Byte(int data)
{
	if(data=='\n')
	{
		while(!(rUTRSTAT0 & 0x2));
		WrUTXH0('\r');
	}
	while(!(rUTRSTAT0 & 0x2));
	WrUTXH0(data);
}               

void Uart_Send_String(char *pt)
{
	while(*pt)
	{
        	Uart_Send_Byte(*pt++);
	}
}

void Uart_Init(int baud)
{
	// PORT GPIO initial
	rGPHCON &= ~(0xf<<4);
	rGPHCON |= (0xa<<4);	

	// COM1 Port initial
	rUFCON0 = 0x0;
	rUMCON0 = 0x0;
	rULCON0 = 0x3;
	rUCON0  = 0x245;		
	rUBRDIV0= ((unsigned int)(PCLK/16./baud+0.5)-1 );
}

int  Uart_Printf(char *fmt,...)
{
    int a;
    va_list ap;
    char string[256];

    va_start(ap,fmt);
    a = vsprintf(string,fmt,ap);
    Uart_Send_String(string);
    va_end(ap);
    return a;
}
