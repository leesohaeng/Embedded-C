	.stabs	"/\341\204\213\341\205\265\341\204\211\341\205\251\341\204\222\341\205\242\341\206\274\341\204\200\341\205\242\341\204\213\341\205\265\341\206\253\341\204\221\341\205\251\341\206\257\341\204\203\341\205\245/\341\204\213\341\205\265\341\206\267\341\204\207\341\205\246\341\204\203\341\205\265\341\204\203\341\205\263\341\204\200\341\205\252\341\206\253\341\204\205\341\205\247\341\206\253/\341\204\213\341\205\265\341\206\267\341\204\207\341\205\246\341\204\203\341\205\265\341\204\203\341\205\263C\341\204\200\341\205\252\341\204\214\341\205\245\341\206\274/C99/",100,0,2,Ltext0
	.stabs	"/\341\204\213\341\205\265\341\204\211\341\205\251\341\204\222\341\205\242\341\206\274\341\204\200\341\205\242\341\204\213\341\205\265\341\206\253\341\204\221\341\205\251\341\206\257\341\204\203\341\205\245/\341\204\213\341\205\265\341\206\267\341\204\207\341\205\246\341\204\203\341\205\265\341\204\203\341\205\263\341\204\200\341\205\252\341\206\253\341\204\205\341\205\247\341\206\253/\341\204\213\341\205\265\341\206\267\341\204\207\341\205\246\341\204\203\341\205\265\341\204\203\341\205\263C\341\204\200\341\205\252\341\204\214\341\205\245\341\206\274/C99/main.c",100,0,2,Ltext0
	.text
Ltext0:
	.stabs	"",102,0,0,0
	.stabs	"gcc2_compiled.",60,0,0,0
	.stabs	":t(0,1)=(0,1)",128,0,0,0
.globl _add
_add:
	.stabd	46,0,0
	.stabd	68,0,6
	nop
	nop
	nop
	nop
	nop
	nop
	pushl	%ebp
	movl	%esp, %ebp
	subl	$8, %esp
	.stabd	68,0,7
	movl	12(%ebp), %eax
	addl	8(%ebp), %eax
	.stabd	68,0,8
	leave
	ret
	.stabs	"add:F(0,2)",36,0,6,_add
	.stabs	"a:p(0,2)",160,0,5,8
	.stabs	"b:p(0,2)",160,0,5,12
	.stabs	"int:t(0,2)=r(0,2);-2147483648;2147483647;",128,0,0,0
Lscope0:
	.stabs	"",36,0,0,Lscope0-_add
	.stabd	78,0,0
	.cstring
LC0:
	.ascii "%d\12\0"
	.text
.globl _main
_main:
	.stabd	46,0,0
	.stabd	68,0,10
	nop
	nop
	nop
	nop
	nop
	nop
	pushl	%ebp
	movl	%esp, %ebp
	pushl	%ebx
	subl	$36, %esp
	call	___i686.get_pc_thunk.bx
"L00000000001$pb":
	.stabd	68,0,12
	leal	L_add$non_lazy_ptr-"L00000000001$pb"(%ebx), %eax
	movl	(%eax), %eax
	movl	%eax, -12(%ebp)
	.stabd	68,0,13
	movl	$2, 4(%esp)
	movl	$1, (%esp)
	movl	-12(%ebp), %eax
	call	*%eax
	movl	%eax, 4(%esp)
	leal	LC0-"L00000000001$pb"(%ebx), %eax
	movl	%eax, (%esp)
	call	L_printf$stub
	.stabd	68,0,14
	movl	$0, %eax
	.stabd	68,0,15
	addl	$36, %esp
	popl	%ebx
	popl	%ebp
	ret
	.stabs	"main:F(0,2)",36,0,10,_main
	.stabs	"argc:p(0,2)",160,0,10,8
	.stabs	"argv:p(0,3)",160,0,10,12
	.stabs	"A:(0,4)",128,0,11,-12
	.stabn	192,0,0,_main
	.stabn	224,0,0,Lscope1
	.stabs	":t(0,3)=*(0,5)",128,0,0,0
	.stabs	":t(0,4)=*(0,6)",128,0,0,0
	.stabs	":t(0,5)=*(0,7)",128,0,0,0
	.stabs	":t(0,6)=f(0,2)",128,0,0,0
	.stabs	":t(0,7)=k(0,8)",128,0,0,0
	.stabs	"char:t(0,8)=r(0,8);0;127;",128,0,0,0
Lscope1:
	.stabs	"",36,0,0,Lscope1-_main
	.stabd	78,0,0
	.stabs	"",100,0,0,Letext0
Letext0:
	.section __IMPORT,__jump_table,symbol_stubs,self_modifying_code+pure_instructions,5
L_printf$stub:
	.indirect_symbol _printf
	hlt ; hlt ; hlt ; hlt ; hlt
	.section __IMPORT,__pointers,non_lazy_symbol_pointers
L_add$non_lazy_ptr:
	.indirect_symbol _add
	.long	0
	.subsections_via_symbols
	.section __TEXT,__textcoal_nt,coalesced,pure_instructions
.weak_definition	___i686.get_pc_thunk.bx
.private_extern	___i686.get_pc_thunk.bx
___i686.get_pc_thunk.bx:
	movl	(%esp), %ebx
	ret
