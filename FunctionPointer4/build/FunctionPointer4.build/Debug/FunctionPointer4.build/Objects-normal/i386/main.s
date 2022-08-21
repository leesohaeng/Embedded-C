	.stabs	"/\341\204\213\341\205\265\341\204\211\341\205\251\341\204\222\341\205\242\341\206\274\341\204\200\341\205\242\341\204\213\341\205\265\341\206\253\341\204\221\341\205\251\341\206\257\341\204\203\341\205\245/\341\204\213\341\205\265\341\206\267\341\204\207\341\205\246\341\204\203\341\205\265\341\204\203\341\205\263\341\204\200\341\205\252\341\206\253\341\204\205\341\205\247\341\206\253/\341\204\213\341\205\265\341\206\267\341\204\207\341\205\246\341\204\203\341\205\265\341\204\203\341\205\263C\341\204\200\341\205\252\341\204\214\341\205\245\341\206\274/FunctionPointer4/",100,0,2,Ltext0
	.stabs	"/\341\204\213\341\205\265\341\204\211\341\205\251\341\204\222\341\205\242\341\206\274\341\204\200\341\205\242\341\204\213\341\205\265\341\206\253\341\204\221\341\205\251\341\206\257\341\204\203\341\205\245/\341\204\213\341\205\265\341\206\267\341\204\207\341\205\246\341\204\203\341\205\265\341\204\203\341\205\263\341\204\200\341\205\252\341\206\253\341\204\205\341\205\247\341\206\253/\341\204\213\341\205\265\341\206\267\341\204\207\341\205\246\341\204\203\341\205\265\341\204\203\341\205\263C\341\204\200\341\205\252\341\204\214\341\205\245\341\206\274/FunctionPointer4/main.c",100,0,2,Ltext0
	.text
Ltext0:
	.stabs	"",102,0,0,0
	.stabs	"gcc2_compiled.",60,0,0,0
	.stabs	":t(0,1)=(0,1)",128,0,0,0
.globl _pa
	.data
	.align 2
_pa:
	.long	_add
	.long	_sub
	.long	_mul
	.text
.globl _add
_add:
	.stabd	46,0,0
	.stabd	68,0,13
	nop
	nop
	nop
	nop
	nop
	nop
	pushl	%ebp
	movl	%esp, %ebp
	subl	$8, %esp
	.stabd	68,0,14
	movl	12(%ebp), %eax
	addl	8(%ebp), %eax
	.stabd	68,0,15
	leave
	ret
	.stabs	"add:F(0,2)",36,0,13,_add
	.stabs	"a:p(0,2)",160,0,12,8
	.stabs	"b:p(0,2)",160,0,12,12
	.stabs	"int:t(0,2)=r(0,2);-2147483648;2147483647;",128,0,0,0
Lscope0:
	.stabs	"",36,0,0,Lscope0-_add
	.stabd	78,0,0
.globl _sub
_sub:
	.stabd	46,0,0
	.stabd	68,0,17
	nop
	nop
	nop
	nop
	nop
	nop
	pushl	%ebp
	movl	%esp, %ebp
	subl	$8, %esp
	.stabd	68,0,18
	movl	12(%ebp), %edx
	movl	8(%ebp), %eax
	subl	%edx, %eax
	.stabd	68,0,19
	leave
	ret
	.stabs	"sub:F(0,2)",36,0,17,_sub
	.stabs	"a:p(0,2)",160,0,16,8
	.stabs	"b:p(0,2)",160,0,16,12
Lscope1:
	.stabs	"",36,0,0,Lscope1-_sub
	.stabd	78,0,0
.globl _mul
_mul:
	.stabd	46,0,0
	.stabd	68,0,21
	nop
	nop
	nop
	nop
	nop
	nop
	pushl	%ebp
	movl	%esp, %ebp
	subl	$8, %esp
	.stabd	68,0,22
	movl	8(%ebp), %eax
	imull	12(%ebp), %eax
	.stabd	68,0,23
	leave
	ret
	.stabs	"mul:F(0,2)",36,0,21,_mul
	.stabs	"a:p(0,2)",160,0,20,8
	.stabs	"b:p(0,2)",160,0,20,12
Lscope2:
	.stabs	"",36,0,0,Lscope2-_mul
	.stabd	78,0,0
.globl _compute
_compute:
	.stabd	46,0,0
	.stabd	68,0,25
	nop
	nop
	nop
	nop
	nop
	nop
	pushl	%ebp
	movl	%esp, %ebp
	subl	$8, %esp
	call	___i686.get_pc_thunk.cx
"L00000000001$pb":
	.stabd	68,0,26
	movl	8(%ebp), %edx
	leal	L_pa$non_lazy_ptr-"L00000000001$pb"(%ecx), %eax
	movl	(%eax), %eax
	movl	(%eax,%edx,4), %eax
	.stabd	68,0,27
	leave
	ret
	.stabs	"compute:F(0,3)",36,0,25,_compute
	.stabs	"op:p(0,2)",160,0,24,8
	.stabs	":t(0,3)=*(0,4)",128,0,0,0
	.stabs	":t(0,4)=f(0,2)",128,0,0,0
Lscope3:
	.stabs	"",36,0,0,Lscope3-_compute
	.stabd	78,0,0
	.cstring
LC0:
	.ascii "%d\12\0"
	.text
.globl _main
_main:
	.stabd	46,0,0
	.stabd	68,0,28
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
"L00000000002$pb":
	.stabd	68,0,31
	leal	L_add$non_lazy_ptr-"L00000000002$pb"(%ebx), %eax
	movl	(%eax), %eax
	movl	%eax, -12(%ebp)
	.stabd	68,0,32
	movl	$4, 4(%esp)
	movl	$3, (%esp)
	movl	-12(%ebp), %eax
	call	*%eax
	movl	%eax, 4(%esp)
	leal	LC0-"L00000000002$pb"(%ebx), %eax
	movl	%eax, (%esp)
	call	L_printf$stub
	.stabd	68,0,35
	movl	$0, (%esp)
	call	_compute
	movl	$6, 4(%esp)
	movl	$7, (%esp)
	call	*%eax
	movl	%eax, 4(%esp)
	leal	LC0-"L00000000002$pb"(%ebx), %eax
	movl	%eax, (%esp)
	call	L_printf$stub
	.stabd	68,0,36
	movl	$0, %eax
	.stabd	68,0,37
	addl	$36, %esp
	popl	%ebx
	popl	%ebp
	ret
	.stabs	"main:F(0,2)",36,0,28,_main
	.stabs	"argc:p(0,2)",160,0,28,8
	.stabs	"argv:p(0,5)",160,0,28,12
	.stabs	"p:(0,6)",128,0,29,-12
	.stabn	192,0,0,_main
	.stabn	224,0,0,Lscope4
	.stabs	":t(0,5)=*(0,7)",128,0,0,0
	.stabs	":t(0,6)=*(0,8)",128,0,0,0
	.stabs	":t(0,7)=*(0,9)",128,0,0,0
	.stabs	":t(0,8)=f(0,2)",128,0,0,0
	.stabs	":t(0,9)=k(0,10)",128,0,0,0
	.stabs	"char:t(0,10)=r(0,10);0;127;",128,0,0,0
Lscope4:
	.stabs	"",36,0,0,Lscope4-_main
	.stabd	78,0,0
.comm _p,16
	.stabs	"p:G(0,3)",32,0,9,0
	.stabs	"pa:G(0,11)",32,0,10,0
	.stabs	":t(0,11)=ar(0,12);0;2;(0,3)",128,0,0,0
	.stabs	"long unsigned int:t(0,12)=r(0,12);0;037777777777;",128,0,0,0
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
L_pa$non_lazy_ptr:
	.indirect_symbol _pa
	.long	0
	.subsections_via_symbols
	.section __TEXT,__textcoal_nt,coalesced,pure_instructions
.weak_definition	___i686.get_pc_thunk.cx
.private_extern	___i686.get_pc_thunk.cx
___i686.get_pc_thunk.cx:
	movl	(%esp), %ecx
	ret
.weak_definition	___i686.get_pc_thunk.bx
.private_extern	___i686.get_pc_thunk.bx
___i686.get_pc_thunk.bx:
	movl	(%esp), %ebx
	ret
