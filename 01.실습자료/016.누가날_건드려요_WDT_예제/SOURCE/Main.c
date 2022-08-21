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
// [1] WDT이 연속 access
// 읽어 온 WDT 값을 다른 곳에 사용하는 경우
/***********************************************************/

/*

// 2440addr.h의 선언을 쓰지 않고 다음과 같이 volatile없이 사용할 것

#define WDTCNT	(*(int *)0x53000008)

void main(void)
{
	int i, a[10];

	Uart_Init(115200);	
	WDT_Init();
	WDT_Start(1);
	
	for(i=0; i<10; i++)
	{
		a[i] = WDTCNT;
		Uart_Printf("\nWDTCON[%d]=%d\n", i, a[i]);
	}
}

*/

/***********************************************************/
// [2] WDT이 연속 access
// 읽어 온 WDT 값을 다른 장소에 저장만 하는 경우
/***********************************************************/


/*
#define WDTCNT	(*(int *)0x53000008)

void main(void)
{
	int i, a[10];

	Uart_Init(115200);	
	WDT_Init();
	WDT_Start(1);
	
	for(i=0; i<10; i++)
	{
		a[i] = WDTCNT;
	}

	for(i=0; i<10; i++)
	{
		Uart_Printf("\nWDTCON[%d]=%d\n", i, a[i]);
	}
}

*/

/***********************************************************/
// [3] WDT이 연속 access
// 읽어 온 WDT 값을 다른 장소에 저장만 하는 경우
// WDTCNT를 volatile 선언
/***********************************************************/



#define WDTCNT	(*(volatile int *)0x53000008)  

void main(void)
{
	int i, a[10];

	Uart_Init(115200);	
	WDT_Init();
	WDT_Start(1);
	
	for(i=0; i<10; i++)
	{
		a[i] = WDTCNT;
	}

	for(i=0; i<10; i++)
	{
		Uart_Printf("\nWDTCON[%d]=%d\n", i, a[i]);
	}
}

