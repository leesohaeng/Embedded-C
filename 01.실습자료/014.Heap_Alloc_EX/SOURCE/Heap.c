#include "2440addr.h"
#include "option.h"
#include "macro.h"

void * Heap_Alloc(int count, int size);
void Heap_Free(void *p);

void * __Current_heap_address__ = START_OF_HEAP;
	
void * Heap_Alloc(int count, int size)
{
	// �ʱ� heap�� �����ּҸ� ����

	unsigned int temp1, temp2;
	
	temp2 = (unsigned int)__Current_heap_address__;
	temp1 = ((unsigned int)__Current_heap_address__ + (count * size));
	
	if(temp1 <= (unsigned int)END_OF_HEAP)
	{
		// single task������ �������� �Ҵ縸 �Ѵ�
		// �̶�, Heap�� �Ҵ�� �ݵ�� 4Byte Align�� �ּҸ� �����Ͽ��� �ϹǷ�
		// ���� �Ҵ��� ���� Heap �ּҸ� �ݵ�� 4B align�ǰ� �Ѵ�
		temp1 += 0x3;
		temp1 &= ~(0x3);
		__Current_heap_address__ = (void *)temp1;
		return (void *)temp2;
	}
	
	else	return (void *)0x0;
}

void Heap_Free(void * p)
{
	// ��ȯ ���� �ּҸ� ���ο� Heap �����ͷ� ����Ѵ�
	// ���ǻ��� : ������� �߸��� �ּҰ� ��ȯ�� ������ �������Ͽ� ������ ����
	// 4B ailgn �ǽ�
	// �Ҵ� ������� free�ؾ��ϴ� å���� ����ڿ��� ����
	unsigned int temp = (unsigned int)p;

	if((temp <= (unsigned int)END_OF_HEAP) && (temp >= (unsigned int)START_OF_HEAP))
	{
		temp += 0x3;
		temp &= ~(0x3);
		__Current_heap_address__ = (void *)temp;
	}
}
