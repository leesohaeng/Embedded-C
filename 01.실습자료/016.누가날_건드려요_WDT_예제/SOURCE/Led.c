
// 이 헤더파일은 정체가 무엇인가?
// 내용을 열어보자

#include "2440addr.h"
#include "macro.h"

void Led_Init(void);
void Led_Display(int value);

void Led_Init(void)
{
	// Turn off LEDs and IO configure

	Macro_Write_Area(rGPEDAT, 0x3, 11);
	Macro_Set_Bit(rGPGDAT, 5);
	
	Macro_Erase_Area(rGPECON, 0xf, 22);
	Macro_Write_Area(rGPECON, 0x5, 22);

	Macro_Erase_Area(rGPGCON, 0x3, 10);
	Macro_Write_Area(rGPGCON, 0x1, 10);
}

void Led_Display(int value)
{
	// B2:B1:B0 => LED2:LED3:LED4 => GPE12:GPG5:GPE11

	Macro_Check_Bit_Set(value, 0) ? Macro_Clear_Bit(rGPEDAT,11) : Macro_Set_Bit(rGPEDAT,11);
	Macro_Check_Bit_Set(value, 2) ? Macro_Clear_Bit(rGPEDAT,12) : Macro_Set_Bit(rGPEDAT,12);
	Macro_Check_Bit_Set(value, 1) ? Macro_Clear_Bit(rGPGDAT,5) : Macro_Set_Bit(rGPGDAT,5);
}
