/* Assembly for CW2.1 */
/* Test LED 3개를 ON 시키는 예제 */
/* 무한루프 대신 ROM, SDRAM 및 GCS 신호 초기화 설정 */
/* Global 변수영역 초기화 */
/* Stack 초기화 */

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
	add	r2, r0, #52				; End address of SMRDATA => total registers = 52/4 = 13개
0       
	ldr	r3, [r0], #4     				; post increment
	str	r3, [r1], #4  				; post increment
	cmp	r2, r0
	bne	%B0

	; C언어의 변수 영역을 설정하기 위한 루틴
	; 기본적인 메모리 설정이 완료되고 수행하여야 한다
	; 컴파일러가 main() 이전에 __main()등 특정 루틴을 삽입하면
	; 해당 루틴이 이 과정을 대신한다. 
	; 단지 본 프로그램에서 bl __main만 수행하면 된다

	IMPORT  |Image$$RO$$Limit|  	; End of ROM code (=Base of RAM data)
	IMPORT  |Image$$RW$$Base|   	; Base of RAM (=Base of RW-Data)
	IMPORT  |Image$$ZI$$Base|   	; Base of BSS
	IMPORT  |Image$$ZI$$Limit|  	; End of BSS
	
	IMPORT  Main    ; The main entry of mon program 
	
	; Copy and paste RW data/zero initialized data
	ldr		r0, =|Image$$RO$$Limit|	; Get pointer to ROM data
	ldr		r1, =|Image$$RW$$Base|  	; and RAM copy
	ldr		r3, =|Image$$ZI$$Base|    	; start of ZI area

	; 만약 RO-LIMIT == RW-BASE 라면?
	; 이미 RW-DATA는 RW 영역에 있다는 것을 의미한다
	; 복사가 필요없다
	
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

	; stack의 생성
	; 기본적으로 C언어 프로그램에서 사용하는 스택이 생성되어야
	; 함수호출과 지역변수의 사용이 가능하다

	; 우선 전원 인가시 SVC 모드이므로 
	; SVC 모드에서만 프로그램이 구동된다고 가정하면
	; 다른 모드의 stack은 설정할 필요가 없게 된다
	; 그러므로 간단히 현재 모드의 sp만 설정하면 된다

	; The location of stacks
	; stack layout design
	; 사용자 임의로 목적에 맞게 재설계 되어야 한다
	; 현재 설계는 ZI-LIMIT을 스택의 제일 위로 본다
	
UserStack_Offset			EQU		0x2000  	; 8KB => ZI-LIMT : (ZI-LIMIT-0x2000)
SVCStack_Offset			EQU		0x4000	; 8KB => (ZI-LIMIT-0x2000) : (ZI-LIMIT-0x4000)
UndefStack_Offset			EQU		0x4400	; 1KB => (ZI-LIMIT-0x4000) : (ZI-LIMIT-0x4400)
AbortStack_Offset			EQU		0x4800	; 1KB => (ZI-LIMIT-0x4400) : (ZI-LIMIT-0x4800)
FIQStack_Offset			EQU		0x4C00	; 1KB => (ZI-LIMIT-0x4800) : (ZI-LIMIT-0x4c00)
IRQStack_Offset			EQU		0x5C00	; 4KB => (ZI-LIMIT-0x3800) : (ZI-LIMIT-0x4800)
STACK_BASE_Offset		EQU		0x5C00 	; total 23KB

	ldr		r1, =|Image$$ZI$$Limit| 		; Top of zero init segment	
	add		sp, r1, #SVCStack_Offset

	; 컴파일러의 startup 루틴을 호출하거나 혹은 임의의 Main을 호출
	; b Main하면 C 함수에서 돌아오지 않음을 가정하는 것이며
	; bl 하면 되돌아 올수도 있음을 가정한다.
	; 따라서 되록아 온 후 할 일이 없으면 b %B0 하면 무한 루프가 형성된다.
	; 이때, 절대로 임베디드 시스템은 프로그램 종료가 없어야 하므로
	; bl main한 후 돌아와서 무한루프를 형성하지 않는 일을 없도록 주의해야 한다
		
    	bl	Main	
0    	
    	b	%b0

; MEMORY 설정을 위한 Table
; 구동하고자 하는 시스템에 따라 설정은 달라진다

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
