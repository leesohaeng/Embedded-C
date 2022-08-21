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

volatile char * Rx_buf_ptr;

void main(void)
{
	unsigned int i;
	char * cp; int * ip;

	// 실험1 : 2MB Heap 할당을 반복하여 Heap 초과를 확인하라

	#if 1

	Uart_Printf("START_OF_HEAP = %x\n", START_OF_HEAP);
	Uart_Printf("END_OF_HEAP = %x\n", END_OF_HEAP);
	Uart_Printf("SIZE_OF_HEAP = %x\n", SIZE_OF_HEAP);
	
	Uart_Printf("Avialble 2MB = %d\n", SIZE_OF_HEAP/0x200000);		
	
	for(i=1; ;i++)
	{
		if(!(Rx_buf_ptr = Heap_Alloc(0x200000, sizeof(char))))
		{
			Uart_Printf("Insufficient Memory!\n");
			return;
		}
		Uart_Printf("[%2d] => [%X]\n", i, Rx_buf_ptr);
	}

	#endif
	
	// 실험2 : 할당 받은 메모리에 내용을 넣고 주소와 함께 인쇄해 보자

	#if 0

	// 15바이트 할당	
	if(!(cp = Heap_Alloc(15, sizeof(char))))
	{
		Uart_Printf("Insufficient Memory!\n");
		return;
	}	
	
	for(i=0; i<15; i++)
	{
		cp[i] = (char)('A'+i);
	}
	
	for(i=0; i<15; i++)
	{
		Uart_Printf("%X : %c\n", &cp[i], cp[i]);
	}

	ip = Heap_Alloc(1, sizeof(int));
	Uart_Printf("[IP] 4B Aligned? %X\n", ip);
	
	Heap_Free(ip);
	Heap_Free(cp);
	
	Uart_Printf("[Address] Start of Heap= %X\n", START_OF_HEAP);
	cp = Heap_Alloc(1, sizeof(char));
	Uart_Printf("[CP] Is Memory Free OK? %X\n", cp);

	ip = Heap_Alloc(1, sizeof(int));
	Uart_Printf("[IP] 4B Aligned? %X\n", ip);

	Heap_Free(ip);
	Heap_Free(cp);
	
	#endif
}