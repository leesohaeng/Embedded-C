#include "2440addr.h"

//LCD config

#define LCD_XSIZE 		(320)	
#define LCD_YSIZE 		(240)

#define HOZVAL		(LCD_XSIZE-1)
#define LINEVAL		(LCD_YSIZE-1)

#define VBPD		10    
#define VFPD		5
#define VSPW		5
#define HBPD		10
#define HFPD		10
#define HSPW		5
#define CLKVAL	4

// LCD

void Lcd_Init(void);
void Lcd_Envid_On_Off(int onoff);
void Lcd_Port_Init(void);
void Lcd_Set_Address(unsigned int fp);

// Graphic

void Graphic_Init(void);
void Lcd_Put_Pixel(int x, int y, int c);

// Functions

void Lcd_Envid_On_Off(int onoff)
{
	(onoff) ? (rLCDCON1 |= 1) : (rLCDCON1 &= ~0x1);
}    

void Lcd_Port_Init(void)
{
	rGPCUP = 0xffffffff; 
	rGPCCON = 0xaaaaaaaa;
	rGPDUP = 0xffffffff; 
	rGPDCON = 0xaaaaaaaa;
}

void Lcd_Init(void)
{
	rLCDCON1=(CLKVAL<<8)+(0x3<<5)+(0xc<<1);
	// TFT LCD panel,12bpp TFT,ENVID=off
	rLCDCON2=(VBPD<<24)+(LINEVAL<<14)+(VFPD<<6)+(VSPW);
	rLCDCON3=(HBPD<<19)+(HOZVAL<<8)+(HFPD);
	rLCDCON4=(HSPW);
	rLCDINTMSK |= 0x3;
	rTCONSEL &= ~0x7;
	rTPAL=0;
}

#define M5D(n) ((n) & 0x1fffff)

void Lcd_Set_Address(unsigned int fp)
{
	rLCDSADDR1=((fp>>22)<<21)+M5D(fp>>1);
	rLCDSADDR2=M5D(fp+(LCD_XSIZE*LCD_YSIZE));
	rLCDSADDR3=LCD_XSIZE;
}

void Graphic_Init(void)
{
     Lcd_Set_Address((unsigned int)0x33800000);
     Lcd_Port_Init();
     Lcd_Init();
     Lcd_Envid_On_Off(1);    
}

// ������ ���� ���� (S3C2440A�� ������ ������ �ּҰ� 4MB align �Ǿ�� ��)
// ������ ������ �ּҴ� 0x33800000���� ��

#define Fb_ptr  ( (unsigned short(*)[320]) 0x33800000 ) // *  ������ �򰥷� ..


// Fb_ptr[y][x]�� �Ǿ�� �ϴµ� ������ �ȼ��� D[31;16]�� Pixel 0, D[15:0]�� Pixel 1���� �ȴ�.

void Lcd_Put_Pixel(int x,int y,int color)
{
	
	Fb_ptr[y][(x^0x01)] = (unsigned short)color;
}

void Lcd_Draw_BMP(int x, int y, const unsigned short int *fp)
{
	register int width = fp[0], height = fp[1];
	register xx, yy;
	
	for(yy=0;yy<height;yy++)
	{
		for(xx=0;xx<width;xx++)
		{
			 Lcd_Put_Pixel(xx+x,yy+y,(int)fp[yy*width+xx+2]);
		} 
	}
}

