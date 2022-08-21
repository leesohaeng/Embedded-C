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

// ���� macro�� 1�� ���� 0�� ���� ���̸� Ȯ���϶�
// ������ �߻��Ͽ��ٸ� � �����̸� ������ �����ΰ�?	

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
	Uart_Printf("[%2u] �ʿ� = 0x%XB : ", count, b);	
	Uart_Printf("remain= 0x%XB, Gvar= %d\n", a - (unsigned)END_OF_USER_STACK - b, Gvar);
	
	Func_Stack();
}
