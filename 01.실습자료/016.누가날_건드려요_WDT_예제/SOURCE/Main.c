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
// [1] WDT�� ���� access
// �о� �� WDT ���� �ٸ� ���� ����ϴ� ���
/***********************************************************/

/*

// 2440addr.h�� ������ ���� �ʰ� ������ ���� volatile���� ����� ��

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
// [2] WDT�� ���� access
// �о� �� WDT ���� �ٸ� ��ҿ� ���常 �ϴ� ���
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
// [3] WDT�� ���� access
// �о� �� WDT ���� �ٸ� ��ҿ� ���常 �ϴ� ���
// WDTCNT�� volatile ����
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

