	.stabs	"/Users/sohaengi/Desktop/\341\204\213\341\205\265\341\206\267\341\204\207\341\205\246\341\204\203\341\205\265\341\204\203\341\205\263C\341\204\200\341\205\252\341\204\214\341\205\245\341\206\274/TypedefUsing/",100,0,2,Ltext0
	.stabs	"/Users/sohaengi/Desktop/\341\204\213\341\205\265\341\206\267\341\204\207\341\205\246\341\204\203\341\205\265\341\204\203\341\205\263C\341\204\200\341\205\252\341\204\214\341\205\245\341\206\274/TypedefUsing/main.c",100,0,2,Ltext0
	.text
Ltext0:
	.stabs	"",102,0,0,0
	.stabs	"gcc2_compiled.",60,0,0,0
	.stabs	":t(0,1)=(0,1)",128,0,0,0
.globl _add
_add:
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
	subl	$8, %esp
	.stabd	68,0,10
	movl	12(%ebp), %eax
	addl	8(%ebp), %eax
	leave
	ret
	.stabs	"add:F(0,2)",36,0,10,_add
	.stabs	"a:p(0,2)",160,0,10,8
	.stabs	"b:p(0,2)",160,0,10,12
	.stabs	"int:t(0,2)=r(0,2);-2147483648;2147483647;",128,0,0,0
Lscope0:
	.stabs	"",36,0,0,Lscope0-_add
	.stabd	78,0,0
.globl _sub
_sub:
	.stabd	46,0,0
	.stabd	68,0,11
	nop
	nop
	nop
	nop
	nop
	nop
	pushl	%ebp
	movl	%esp, %ebp
	subl	$8, %esp
	.stabd	68,0,11
	movl	12(%ebp), %edx
	movl	8(%ebp), %eax
	subl	%edx, %eax
	leave
	ret
	.stabs	"sub:F(0,2)",36,0,11,_sub
	.stabs	"a:p(0,2)",160,0,11,8
	.stabs	"b:p(0,2)",160,0,11,12
Lscope1:
	.stabs	"",36,0,0,Lscope1-_sub
	.stabd	78,0,0
.globl _mul
_mul:
	.stabd	46,0,0
	.stabd	68,0,12
	nop
	nop
	nop
	nop
	nop
	nop
	pushl	%ebp
	movl	%esp, %ebp
	subl	$8, %esp
	.stabd	68,0,12
	movl	8(%ebp), %eax
	imull	12(%ebp), %eax
	leave
	ret
	.stabs	"mul:F(0,2)",36,0,12,_mul
	.stabs	"a:p(0,2)",160,0,12,8
	.stabs	"b:p(0,2)",160,0,12,12
Lscope2:
	.stabs	"",36,0,0,Lscope2-_mul
	.stabd	78,0,0
.globl _pa
	.data
	.align 2
_pa:
	.long	_add
	.long	_sub
	.long	_mul
	.cstring
LC0:
	.ascii "%3d ; \0"
	.text
.globl _compute
_compute:
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
	pushl	%ebx
	subl	$68, %esp
	call	___i686.get_pc_thunk.bx
"L00000000001$pb":
	.stabd	68,0,18
	movl	8(%ebp), %eax
	call	*%eax
	movl	%eax, -12(%ebp)
	.stabd	68,0,19
	movl	-12(%ebp), %eax
	movl	%eax, -44(%ebp)
	movl	$1431655766, -48(%ebp)
	movl	-48(%ebp), %eax
	imull	-44(%ebp)
	movl	%edx, %ecx
	movl	-44(%ebp), %eax
	sarl	$31, %eax
	movl	%ecx, %edx
	subl	%eax, %edx
	movl	%edx, -32(%ebp)
	movl	-32(%ebp), %eax
	addl	%eax, %eax
	addl	-32(%ebp), %eax
	movl	-44(%ebp), %edx
	subl	%eax, %edx
	movl	%edx, -32(%ebp)
	movl	-32(%ebp), %eax
	movl	%eax, 4(%esp)
	leal	LC0-"L00000000001$pb"(%ebx), %eax
	movl	%eax, (%esp)
	call	L_printf$stub
	.stabd	68,0,20
	movl	-12(%ebp), %edx
	movl	%edx, -44(%ebp)
	movl	$1431655766, -48(%ebp)
	movl	-48(%ebp), %eax
	imull	-44(%ebp)
	movl	%edx, %ecx
	movl	-44(%ebp), %eax
	sarl	$31, %eax
	movl	%ecx, %edx
	subl	%eax, %edx
	movl	%edx, -28(%ebp)
	movl	-28(%ebp), %eax
	addl	%eax, %eax
	addl	-28(%ebp), %eax
	movl	-44(%ebp), %edx
	subl	%eax, %edx
	movl	%edx, -28(%ebp)
	leal	L_pa$non_lazy_ptr-"L00000000001$pb"(%ebx), %eax
	movl	(%eax), %eax
	movl	-28(%ebp), %edx
	movl	(%eax,%edx,4), %eax
	.stabd	68,0,21
	addl	$68, %esp
	popl	%ebx
	popl	%ebp
	ret
	.stabs	"compute:F(0,3)",36,0,17,_compute
	.stabs	"op:p(0,3)",160,0,16,8
	.stabs	"rnd:(0,2)",128,0,18,-12
	.stabs	"int:t(0,2)",128,0,0,0
	.stabs	":t(0,4)=*(0,5)",128,0,0,0
	.stabs	"FPtr:t(0,3)=(0,4)",128,0,0,0
	.stabs	":t(0,5)=f(0,2)",128,0,0,0
	.stabn	192,0,0,_compute
	.stabn	224,0,0,Lscope3
Lscope3:
	.stabs	"",36,0,0,Lscope3-_compute
	.stabd	78,0,0
	.cstring
LC1:
	.ascii "%x\12\0"
LC2:
	.ascii "    %d\12\0"
	.text
.globl _main
_main:
	.stabd	46,0,0
	.stabd	68,0,23
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
	.stabd	68,0,27
	leal	-16(%ebp), %eax
	movl	%eax, (%esp)
	call	L_time$stub
	movl	%eax, (%esp)
	call	L_srand$stub
	.stabd	68,0,29
	movl	$0, -12(%ebp)
	jmp	L10
L11:
	movl	-12(%ebp), %edx
	leal	L_pa$non_lazy_ptr-"L00000000002$pb"(%ebx), %eax
	movl	(%eax), %eax
	movl	(%eax,%edx,4), %eax
	movl	%eax, 4(%esp)
	leal	LC1-"L00000000002$pb"(%ebx), %eax
	movl	%eax, (%esp)
	call	L_printf$stub
	leal	-12(%ebp), %eax
	addl	$1, (%eax)
L10:
	cmpl	$2, -12(%ebp)
	jle	L11
	.stabd	68,0,31
	movl	$0, -12(%ebp)
	jmp	L13
L14:
	.stabd	68,0,33
	leal	L_rand$non_lazy_ptr-"L00000000002$pb"(%ebx), %eax
	movl	(%eax), %eax
	movl	%eax, (%esp)
	call	_compute
	movl	$4, 4(%esp)
	movl	$3, (%esp)
	call	*%eax
	movl	%eax, 4(%esp)
	leal	LC2-"L00000000002$pb"(%ebx), %eax
	movl	%eax, (%esp)
	call	L_printf$stub
	.stabd	68,0,31
	leal	-12(%ebp), %eax
	addl	$1, (%eax)
L13:
	cmpl	$9, -12(%ebp)
	jle	L14
	.stabd	68,0,35
	movl	$0, %eax
	.stabd	68,0,36
	addl	$36, %esp
	popl	%ebx
	popl	%ebp
	ret
	.stabs	"main:F(0,2)",36,0,23,_main
	.stabs	"argc:p(0,2)",160,0,23,8
	.stabs	"argv:p(0,6)",160,0,23,12
	.stabs	"i:(0,2)",128,0,24,-12
	.stabs	":t(0,6)=*(0,7)",128,0,0,0
	.stabs	":t(0,7)=*(0,8)",128,0,0,0
	.stabs	":t(0,8)=k(0,9)",128,0,0,0
	.stabs	"char:t(0,9)=r(0,9);0;127;",128,0,0,0
	.stabs	"t:(0,10)",128,0,25,-16
	.stabs	"time_t:t(0,10)=(0,11)",128,0,84,0
	.stabs	"__darwin_time_t:t(0,11)=(0,12)",128,0,0,0
	.stabs	"long int:t(0,12)=r(0,12);-2147483648;2147483647;",128,0,0,0
	.stabn	192,0,0,_main
	.stabn	224,0,0,Lscope4
Lscope4:
	.stabs	"",36,0,0,Lscope4-_main
	.stabd	78,0,0
	.stabs	"pa:G(0,13)",32,0,14,0
	.stabs	":t(0,13)=ar(0,14);0;2;(0,3)",128,0,0,0
	.stabs	"long unsigned int:t(0,14)=r(0,14);0;037777777777;",128,0,0,0
	.stabs	"",100,0,0,Letext0
Letext0:
	.section __IMPORT,__jump_table,symbol_stubs,self_modifying_code+pure_instructions,5
L_printf$stub:
	.indirect_symbol _printf
	hlt ; hlt ; hlt ; hlt ; hlt
	.section __IMPORT,__pointers,non_lazy_symbol_pointers
L_rand$non_lazy_ptr:
	.indirect_symbol _rand
	.long	0
	.section __IMPORT,__jump_table,symbol_stubs,self_modifying_code+pure_instructions,5
L_time$stub:
	.indirect_symbol _time
	hlt ; hlt ; hlt ; hlt ; hlt
	.section __IMPORT,__pointers,non_lazy_symbol_pointers
L_pa$non_lazy_ptr:
	.indirect_symbol _pa
	.long	0
	.section __IMPORT,__jump_table,symbol_stubs,self_modifying_code+pure_instructions,5
L_srand$stub:
	.indirect_symbol _srand
	hlt ; hlt ; hlt ; hlt ; hlt
	.subsections_via_symbols
	.section __TEXT,__textcoal_nt,coalesced,pure_instructions
.weak_definition	___i686.get_pc_thunk.bx
.private_extern	___i686.get_pc_thunk.bx
___i686.get_pc_thunk.bx:
	movl	(%esp), %ebx
	ret
