	.stabs	"/\341\204\213\341\205\265\341\204\211\341\205\251\341\204\222\341\205\242\341\206\274\341\204\200\341\205\242\341\204\213\341\205\265\341\206\253\341\204\221\341\205\251\341\206\257\341\204\203\341\205\245/\341\204\213\341\205\265\341\206\267\341\204\207\341\205\246\341\204\203\341\205\265\341\204\203\341\205\263\341\204\200\341\205\252\341\206\253\341\204\205\341\205\247\341\206\253/\341\204\213\341\205\265\341\206\267\341\204\207\341\205\246\341\204\203\341\205\265\341\204\203\341\205\263C\341\204\200\341\205\252\341\204\214\341\205\245\341\206\274/StarPtrDim/",100,0,2,Ltext0
	.stabs	"/\341\204\213\341\205\265\341\204\211\341\205\251\341\204\222\341\205\242\341\206\274\341\204\200\341\205\242\341\204\213\341\205\265\341\206\253\341\204\221\341\205\251\341\206\257\341\204\203\341\205\245/\341\204\213\341\205\265\341\206\267\341\204\207\341\205\246\341\204\203\341\205\265\341\204\203\341\205\263\341\204\200\341\205\252\341\206\253\341\204\205\341\205\247\341\206\253/\341\204\213\341\205\265\341\206\267\341\204\207\341\205\246\341\204\203\341\205\265\341\204\203\341\205\263C\341\204\200\341\205\252\341\204\214\341\205\245\341\206\274/StarPtrDim/main.c",100,0,2,Ltext0
	.text
Ltext0:
	.stabs	"",102,0,0,0
	.stabs	"gcc2_compiled.",60,0,0,0
	.stabs	":t(0,1)=(0,1)",128,0,0,0
.globl _a
	.data
	.align 5
_a:
	.long	1
	.long	2
	.long	3
	.long	4
	.long	5
	.long	6
	.long	7
	.long	8
	.long	9
	.long	10
	.long	11
	.long	12
.globl _ptr
	.align 2
_ptr:
	.long	_a
.globl _pa
	.align 2
_pa:
	.long	_a
	.long	_a+16
	.long	_a+32
.globl _p
	.align 2
_p:
	.long	_a
	.cstring
LC0:
	.ascii "Hello, World!\0"
	.text
.globl _main
_main:
	.stabd	46,0,0
	.stabd	68,0,7
	nop
	nop
	nop
	nop
	nop
	nop
	pushl	%ebp
	movl	%esp, %ebp
	pushl	%ebx
	subl	$20, %esp
	call	___i686.get_pc_thunk.bx
"L00000000001$pb":
	.stabd	68,0,9
	leal	LC0-"L00000000001$pb"(%ebx), %eax
	movl	%eax, (%esp)
	call	L_puts$stub
	.stabd	68,0,10
	movl	$0, %eax
	.stabd	68,0,11
	addl	$20, %esp
	popl	%ebx
	popl	%ebp
	ret
	.stabs	"main:F(0,2)",36,0,7,_main
	.stabs	"argc:p(0,2)",160,0,7,8
	.stabs	"argv:p(0,3)",160,0,7,12
	.stabs	"int:t(0,2)=r(0,2);-2147483648;2147483647;",128,0,0,0
	.stabs	":t(0,3)=*(0,4)",128,0,0,0
	.stabs	":t(0,4)=*(0,5)",128,0,0,0
	.stabs	":t(0,5)=k(0,6)",128,0,0,0
	.stabs	"char:t(0,6)=r(0,6);0;127;",128,0,0,0
Lscope0:
	.stabs	"",36,0,0,Lscope0-_main
	.stabd	78,0,0
	.stabs	"a:G(0,7)",32,0,2,0
	.stabs	"ptr:G(0,8)",32,0,3,0
	.stabs	"pa:G(0,9)",32,0,4,0
	.stabs	"p:G(0,10)",32,0,5,0
	.stabs	"int:t(0,2)",128,0,0,0
	.stabs	":t(0,7)=ar(0,11);0;2;(0,12)",128,0,0,0
	.stabs	":t(0,8)=*(0,12)",128,0,0,0
	.stabs	":t(0,9)=ar(0,11);0;2;(0,10)",128,0,0,0
	.stabs	":t(0,10)=*(0,2)",128,0,0,0
	.stabs	"long unsigned int:t(0,11)=r(0,11);0;037777777777;",128,0,0,0
	.stabs	":t(0,12)=ar(0,11);0;3;(0,2)",128,0,0,0
	.stabs	"",100,0,0,Letext0
Letext0:
	.section __IMPORT,__jump_table,symbol_stubs,self_modifying_code+pure_instructions,5
L_puts$stub:
	.indirect_symbol _puts
	hlt ; hlt ; hlt ; hlt ; hlt
	.subsections_via_symbols
	.section __TEXT,__textcoal_nt,coalesced,pure_instructions
.weak_definition	___i686.get_pc_thunk.bx
.private_extern	___i686.get_pc_thunk.bx
___i686.get_pc_thunk.bx:
	movl	(%esp), %ebx
	ret
