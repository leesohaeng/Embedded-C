//=============================================================================
// File Name : option.h
//=============================================================================

#define _SDRAM_STARTADDRESS			0x30000000
#define _ISR_STARTADDRESS				0x30000000

// C 변수 메모리 영역은 반드시 ISR_Start 주소 이후 이어야 한다
#define _CMEMORY_STARTADDRESS	(_SDRAM_STARTADDRESS+0xa0)

// Frequency setting

#define	FCLK		399650000	// 399.650MHz (400MHz)
#define	HCLK		(FCLK/4)		// 99.9125MHz (100MHz)
#define	PCLK		(FCLK/8)		// 49.95625MHz (50MHz)

// For Heap and Stack Operation

// 컴파일러 참조 변수
extern unsigned int __END_BSS;
extern unsigned int __START_BSS;

// Heap의 마지막 주소는 SDRAM의 마지막 주소 이지만 
// LCD등과 같이 frame buffer가 특정 size align이 되어야 하는 경우는
// 이 주소값을 조정하고 주소를 명확히 해야하는 특수한 버퍼들은 직접 HEAP 뒤에 잡는다
// 메모리 끝까지 0x32000000 ~ 0x33ffffff 까지(SDRAM 총 64MB중 32MB)를 특수 용도로 할당하였다
// Heap의 크기는 BSS 영역과 뒤 이은 stack의 뒷부분 부터로 가변적으로 할당된다
#define     START_OF_HEAP		(void *)((unsigned int)&__END_BSS + STACK_SIZE + 4)
#define	END_OF_HEAP		(void *)(0x32000000 - 4)
#define	SIZE_OF_HEAP		((unsigned)END_OF_HEAP - (unsigned)START_OF_HEAP)

// user program을 위한 USER Stack의 마지막 주소는 __END_BSS와 동일
// 스택은 주소가 줄어 들기 때문에 끝 주소인 __END_BSS + USER_STACK_SIZE 가 시작이 된다


#define   	STACK_SIZE				0x5c00
#define 	USER_STACK_SIZE		0x2000
#define  	END_OF_USER_STACK	(void *)((unsigned int)&__END_BSS)
#define  	START_OF_USER_STACK	(void *)((unsigned int)&__END_BSS + USER_STACK_SIZE)

