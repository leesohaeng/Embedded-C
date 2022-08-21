//=============================================================================
// File Name : option.h
//=============================================================================

#define _SDRAM_STARTADDRESS			0x30000000
#define _ISR_STARTADDRESS				0x30000000

// C ���� �޸� ������ �ݵ�� ISR_Start �ּ� ���� �̾�� �Ѵ�
#define _CMEMORY_STARTADDRESS	(_SDRAM_STARTADDRESS+0xa0)

// Frequency setting

#define	FCLK		399650000	// 399.650MHz (400MHz)
#define	HCLK		(FCLK/4)		// 99.9125MHz (100MHz)
#define	PCLK		(FCLK/8)		// 49.95625MHz (50MHz)

// For Heap and Stack Operation

// �����Ϸ� ���� ����
extern unsigned int __END_BSS;
extern unsigned int __START_BSS;

// Heap�� ������ �ּҴ� SDRAM�� ������ �ּ� ������ 
// LCD��� ���� frame buffer�� Ư�� size align�� �Ǿ�� �ϴ� ����
// �� �ּҰ��� �����ϰ� �ּҸ� ��Ȯ�� �ؾ��ϴ� Ư���� ���۵��� ���� HEAP �ڿ� ��´�
// �޸� ������ 0x32000000 ~ 0x33ffffff ����(SDRAM �� 64MB�� 32MB)�� Ư�� �뵵�� �Ҵ��Ͽ���
// Heap�� ũ��� BSS ������ �� ���� stack�� �޺κ� ���ͷ� ���������� �Ҵ�ȴ�
#define     START_OF_HEAP		(void *)((unsigned int)&__END_BSS + STACK_SIZE + 4)
#define	END_OF_HEAP		(void *)(0x32000000 - 4)
#define	SIZE_OF_HEAP		((unsigned)END_OF_HEAP - (unsigned)START_OF_HEAP)

// user program�� ���� USER Stack�� ������ �ּҴ� __END_BSS�� ����
// ������ �ּҰ� �پ� ��� ������ �� �ּ��� __END_BSS + USER_STACK_SIZE �� ������ �ȴ�


#define   	STACK_SIZE				0x5c00
#define 	USER_STACK_SIZE		0x2000
#define  	END_OF_USER_STACK	(void *)((unsigned int)&__END_BSS)
#define  	START_OF_USER_STACK	(void *)((unsigned int)&__END_BSS + USER_STACK_SIZE)

