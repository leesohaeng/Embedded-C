/*===== << 이 부분은 실습을 위하여 수정 금지 >> =====*/
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

/*===== << 여기부터 사용자 프로그램을 작성함 >> =====*/

/***********************************************************/
// Lcd_Put_Pixel(int x, int y, int color) 함수 검증 루틴
/***********************************************************/

// 불러올 그래픽 화일을 지정
#include ".\images\jeehye01.h"

void main(void)
{
	printf("Frame Buffer Access Test\n");

	Graphic_Init( );
	Lcd_Draw_BMP(0, 0, jeehye01); 	
}
