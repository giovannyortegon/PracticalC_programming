	.file	"variables.c"
	.text
	.globl	gvar1
	.data
	.type	gvar1, @object
	.size	gvar1, 1
gvar1:
	.byte	17
	.globl	gvar2
	.type	gvar2, @object
	.size	gvar2, 1
gvar2:
	.byte	34
	.globl	gvar3
	.align 2
	.type	gvar3, @object
	.size	gvar3, 2
gvar3:
	.value	51
	.globl	gvar4
	.align 2
	.type	gvar4, @object
	.size	gvar4, 2
gvar4:
	.value	68
	.globl	gvar5
	.align 4
	.type	gvar5, @object
	.size	gvar5, 4
gvar5:
	.long	85
	.globl	gvar6
	.align 4
	.type	gvar6, @object
	.size	gvar6, 4
gvar6:
	.long	102
	.globl	gvar7
	.align 4
	.type	gvar7, @object
	.size	gvar7, 4
gvar7:
	.long	119
	.globl	gvar8
	.align 4
	.type	gvar8, @object
	.size	gvar8, 4
gvar8:
	.long	136
	.globl	gvar9
	.align 8
	.type	gvar9, @object
	.size	gvar9, 8
gvar9:
	.long	153
	.long	0
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-8, %esp
	subl	$32, %esp
	call	__x86.get_pc_thunk.ax
	addl	$_GLOBAL_OFFSET_TABLE_, %eax
	movb	$17, 31(%esp)
	movb	$34, 30(%esp)
	movw	$51, 28(%esp)
	movw	$68, 26(%esp)
	movl	$85, 20(%esp)
	movl	$102, 16(%esp)
	movl	$119, 12(%esp)
	movl	$136, 8(%esp)
	movl	$153, (%esp)
	movl	$0, 4(%esp)
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.text.__x86.get_pc_thunk.ax,"axG",@progbits,__x86.get_pc_thunk.ax,comdat
	.globl	__x86.get_pc_thunk.ax
	.hidden	__x86.get_pc_thunk.ax
	.type	__x86.get_pc_thunk.ax, @function
__x86.get_pc_thunk.ax:
.LFB1:
	.cfi_startproc
	movl	(%esp), %eax
	ret
	.cfi_endproc
.LFE1:
	.ident	"GCC: (Debian 10.2.1-6) 10.2.1 20210110"
	.section	.note.GNU-stack,"",@progbits
