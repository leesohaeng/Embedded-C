#include "2440addr.h"
#include "option.h"
#include "macro.h"

void * Heap_Alloc(int count, int size);
void Heap_Free(void *p);

void * __Current_heap_address__ = START_OF_HEAP;
	
void * Heap_Alloc(int count, int size)
{

	void * Return_Heap_Address;
	
	if( ((void *)((unsigned int)__Current_heap_address__ + 	count * size)) < END_OF_HEAP ) 
	{
		Return_Heap_Address = __Current_heap_address__;
		__Current_heap_address__ = ((void *)((unsigned int)__Current_heap_address__ + 	count * size));
		
	}
	else 
	{
		(void*)(Return_Heap_Address) = 0;
	}
	return Return_Heap_Address;
}

void Heap_Free(void * p)
{
	__Current_heap_address__ = p;
}
