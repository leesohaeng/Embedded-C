/*===== << �� �κ��� �ǽ��� ���Ͽ� ���� ���� >> =====*/
#include "my_lib.h"
#define 	printf		Uart_Printf
#define 	main		User_Main
void User_Main(void);
void Main(void)
{
	Uart_Init(115200);	
	printf("\n=================================\n");
	main();
	printf("=================================\n");
}

/*===== << ������� ����� ���α׷��� �ۼ��� >> =====*/

/***********************************************************/
// Lcd_Put_Pixel(int x, int y, int color) �Լ� ���� ��ƾ
/***********************************************************/

// �ҷ��� �׷��� ȭ���� ����
#include ".\images\jeehye01.h"

void main(void)
{
	printf("Frame Buffer Access Test\n");

	Graphic_Init( );
	Lcd_Draw_BMP(0, 0, jeehye01); 	
}
