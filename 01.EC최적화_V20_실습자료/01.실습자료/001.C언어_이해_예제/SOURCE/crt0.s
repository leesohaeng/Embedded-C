/* Assembly for CW2.1 */
/* Test LED 3���� ON ��Ű�� ���� */
/* ���ѷ��� ��� ROM, SDRAM �� GCS ��ȣ �ʱ�ȭ ���� */
/* Global �������� �ʱ�ȭ */
/* Stack �ʱ�ȭ */

#include "2440addr.inc"
;	GET 2440addr.inc

	AREA    Init,CODE,READONLY

	EXPORT _start
_start
	ldr		r0,=WTCON			;watch dog disable 
	ldr		r1,=0x0         
	str		r1,[r0]

	ldr		r0,=INTMSK
	ldr		r1,=0xffffffff			;all interrupt disable
	str		r1,[r0]

	ldr		r0,=INTSUBMSK
	ldr		r1,=0x7fff			;all sub interrupt disable
	str		r1,[r0]

	;Set clock PLL
	ldr		r0,=LOCKTIME
	ldr		r1,=0xffffff
	str		r1,[r0]

	;Configure Camera Clock
	ldr		r0,=CAMDIVN
	ldr		r1,=0x0 			
	str		r1,[r0]

	;Configure Clock Divide for FCLK:HCLK:PCLK
	ldr		r0,=CLKDIVN
	ldr		r1,=0x5 				; FCLK:HCLK:PCLK=(1:4:8)
	str		r1,[r0]

	;Configure MPLL
	ldr		r0,=MPLLCON
	ldr		r1,= 0x6e031  			; 399.65MHz(About 400MHz) @ 16.9344MHz
	str		r1,[r0]

	;Set memory control registers
    	ldr	r0,=SMRDATA
	ldr	r1,=BWSCON				; BWSCON Address (Start Address)
	add	r2, r0, #52				; End address of SMRDATA => total registers = 52/4 = 13��
0       
	ldr	r3, [r0], #4     				; post increment
	str	r3, [r1], #4  				; post increment
	cmp	r2, r0
	bne	%B0

	; C����� ���� ������ �����ϱ� ���� ��ƾ
	; �⺻���� �޸� ������ �Ϸ�ǰ� �����Ͽ��� �Ѵ�
	; �����Ϸ��� main() ������ __main()�� Ư�� ��ƾ�� �����ϸ�
	; �ش� ��ƾ�� �� ������ ����Ѵ�. 
	; ���� �� ���α׷����� bl __main�� �����ϸ� �ȴ�

	IMPORT  |Image$$RO$$Limit|  	; End of ROM code (=Base of RAM data)
	IMPORT  |Image$$RW$$Base|   	; Base of RAM (=Base of RW-Data)
	IMPORT  |Image$$ZI$$Base|   	; Base of BSS
	IMPORT  |Image$$ZI$$Limit|  	; End of BSS
	
	IMPORT  Main    ; The main entry of mon program 
	
	; Copy and paste RW data/zero initialized data
	ldr		r0, =|Image$$RO$$Limit|	; Get pointer to ROM data
	ldr		r1, =|Image$$RW$$Base|  	; and RAM copy
	ldr		r3, =|Image$$ZI$$Base|    	; start of ZI area

	; ���� RO-LIMIT == RW-BASE ���?
	; �̹� RW-DATA�� RW ������ �ִٴ� ���� �ǹ��Ѵ�
	; ���簡 �ʿ����
	
	; RW-DATA copy to RAM Area
	cmp		r0, r1      					; Check that they are different
	beq		%F2
1       
	cmp		r1, r3					; Copy init data
	ldrcc	r2, [r0], #4	
	strcc 	r2, [r1], #4	
	bcc		%B1
2       
	ldr	r1, =|Image$$ZI$$Limit| 		; Top of zero init segment
	mov		r2, #0
3       
	cmp		r3, r1					; Zero init
	strcc	r2, [r3], #4
	bcc		%B3

	; stack�� ����
	; �⺻������ C��� ���α׷����� ����ϴ� ������ �����Ǿ��
	; �Լ�ȣ��� ���������� ����� �����ϴ�

	; �켱 ���� �ΰ��� SVC ����̹Ƿ� 
	; SVC ��忡���� ���α׷��� �����ȴٰ� �����ϸ�
	; �ٸ� ����� stack�� ������ �ʿ䰡 ���� �ȴ�
	; �׷��Ƿ� ������ ���� ����� sp�� �����ϸ� �ȴ�

	; The location of stacks
	; stack layout design
	; ����� ���Ƿ� ������ �°� �缳�� �Ǿ�� �Ѵ�
	; ���� ����� ZI-LIMIT�� ������ ���� ���� ����
	
UserStack_Offset			EQU		0x2000  	; 8KB => ZI-LIMT : (ZI-LIMIT-0x2000)
SVCStack_Offset			EQU		0x4000	; 8KB => (ZI-LIMIT-0x2000) : (ZI-LIMIT-0x4000)
UndefStack_Offset			EQU		0x4400	; 1KB => (ZI-LIMIT-0x4000) : (ZI-LIMIT-0x4400)
AbortStack_Offset			EQU		0x4800	; 1KB => (ZI-LIMIT-0x4400) : (ZI-LIMIT-0x4800)
FIQStack_Offset			EQU		0x4C00	; 1KB => (ZI-LIMIT-0x4800) : (ZI-LIMIT-0x4c00)
IRQStack_Offset			EQU		0x5C00	; 4KB => (ZI-LIMIT-0x3800) : (ZI-LIMIT-0x4800)
STACK_BASE_Offset		EQU		0x5C00 	; total 23KB

	ldr		r1, =|Image$$ZI$$Limit| 		; Top of zero init segment	
	add		sp, r1, #SVCStack_Offset

	; �����Ϸ��� startup ��ƾ�� ȣ���ϰų� Ȥ�� ������ Main�� ȣ��
	; b Main�ϸ� C �Լ����� ���ƿ��� ������ �����ϴ� ���̸�
	; bl �ϸ� �ǵ��� �ü��� ������ �����Ѵ�.
	; ���� �ǷϾ� �� �� �� ���� ������ b %B0 �ϸ� ���� ������ �����ȴ�.
	; �̶�, ����� �Ӻ���� �ý����� ���α׷� ���ᰡ ����� �ϹǷ�
	; bl main�� �� ���ƿͼ� ���ѷ����� �������� �ʴ� ���� ������ �����ؾ� �Ѵ�
		
    	bl	Main	
0    	
    	b	%b0

; MEMORY ������ ���� Table
; �����ϰ��� �ϴ� �ý��ۿ� ���� ������ �޶�����

SMRDATA
	DCD 0x22505112
	DCD 0x00000700
	DCD 0x00007ff0 
	DCD 0x00000700
	DCD 0x00007ff0 
	DCD 0x00000700
	DCD 0x00000700
	DCD 0x00018005
	DCD 0x00018005
	DCD 0x008e0459
	DCD 0x32		
    	DCD 0x30		
    	DCD 0x30		

    END
