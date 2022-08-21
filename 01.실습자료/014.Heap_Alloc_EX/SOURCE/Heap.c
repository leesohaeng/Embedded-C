#include "2440addr.h"
#include "option.h"
#include "macro.h"

void * Heap_Alloc(int count, int size);
void Heap_Free(void *p);

void * __Current_heap_address__ = START_OF_HEAP;
	
void * Heap_Alloc(int count, int size)
{
	// 초기 heap의 시작주소를 기입

	unsigned int temp1, temp2;
	
	temp2 = (unsigned int)__Current_heap_address__;
	temp1 = ((unsigned int)__Current_heap_address__ + (count * size));
	
	if(temp1 <= (unsigned int)END_OF_HEAP)
	{
		// single task용으로 연속적인 할당만 한다
		// 이때, Heap의 할당시 반드시 4Byte Align된 주소를 제공하여야 하므로
		// 다음 할당을 위한 Heap 주소를 반드시 4B align되게 한다
		temp1 += 0x3;
		temp1 &= ~(0x3);
		__Current_heap_address__ = (void *)temp1;
		return (void *)temp2;
	}
	
	else	return (void *)0x0;
}

void Heap_Free(void * p)
{
	// 반환 받은 주소를 새로운 Heap 포인터로 사용한다
	// 주의사항 : 사용자의 잘못된 주소값 반환시 에러를 막기위하여 연산을 수행
	// 4B ailgn 실시
	// 할당 받은대로 free해야하는 책임은 사용자에게 있음
	unsigned int temp = (unsigned int)p;

	if((temp <= (unsigned int)END_OF_HEAP) && (temp >= (unsigned int)START_OF_HEAP))
	{
		temp += 0x3;
		temp &= ~(0x3);
		__Current_heap_address__ = (void *)temp;
	}
}
