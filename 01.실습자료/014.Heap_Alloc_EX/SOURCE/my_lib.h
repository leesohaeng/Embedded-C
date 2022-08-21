//=============================================================================
// File Name : my_lib.h
//=============================================================================

// UART.c
extern void Uart_Init(int baud);
extern void Uart_Printf(char *fmt,...);
extern void Uart_Send_Byte(int data);
extern void Uart_Send_String(char *pt);

// Led.c
extern void Led_Init(void);
extern void Led_Display(int value);

// Wdt.c
extern void WDT_Init(void);
extern void WDT_Start(int start);
extern unsigned int RTC_Get_Seed(void);

// My_Library.a
extern int _My_Add(const int, const int);
extern int _My_Str_Leng(const char *);

// Lcd.c
extern void Graphic_Init(void);
extern void Lcd_Put_Pixel(int x, int y, int c);
extern void Lcd_Draw_BMP(int x, int y, const unsigned short int *fp);
extern void Lcd_Get_Info_BMP(int * x, int  * y, const unsigned short int *fp);

// Heap.c
extern void * Heap_Alloc(int count, int size);
extern void Heap_Free(void * p);
