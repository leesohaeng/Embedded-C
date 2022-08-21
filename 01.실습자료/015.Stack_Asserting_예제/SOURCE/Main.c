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

#include "option.h"

#define ASSERT_STK(size) \
{\
	unsigned int a = 0; \
	__asm{mov	a, sp;} \
    if( (a - (unsigned int)END_OF_USER_STACK) <= (size) ) \
    { \
   	 	Uart_Printf("Insufficient Stack!"); \
   	 	for(;;); \
    } \
}

// Main Function
void Func_Stack(void);

void main(void)
{
	Uart_Printf("END_OF_USER_STACK = %x\n", END_OF_USER_STACK);
	Uart_Printf("START_OF_USER_STACK = %x\n", START_OF_USER_STACK);
	
	Func_Stack();
}

// Stack and Heap Assertion

// 다음 macro가 1일 때와 0일 때의 차이를 확인하라
// 문제가 발생하였다면 어떤 문제이며 원인은 무엇인가?	

#define 	DEBUG_ASSERT 	1

int Gvar;

void Func_Stack(void)
{
	static unsigned int count = 0;
	unsigned int a = 0, b;

	volatile char arr[0x200]= {1,2,};
	
	__asm{mov a, sp;};
	b = sizeof(arr)+0x20;
	
	#if DEBUG_ASSERT
		ASSERT_STK(b);
	#endif

	Uart_Printf("[%2u] sp= 0x%X : ", count++,  a);
	Uart_Printf("[%2u] 필요 = 0x%XB : ", count, b);	
	Uart_Printf("remain= 0x%XB, Gvar= %d\n", a - (unsigned)END_OF_USER_STACK - b, Gvar);
	
	Func_Stack();
}
