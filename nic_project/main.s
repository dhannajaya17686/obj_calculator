	.file	"main.c"
	.text
	.globl	NIC_NUMBER
	.bss
	.align 8
	.type	NIC_NUMBER, @object
	.size	NIC_NUMBER, 13
NIC_NUMBER:
	.zero	13
	.globl	NIC_NUMUBER_VAL
	.align 8
	.type	NIC_NUMUBER_VAL, @object
	.size	NIC_NUMUBER_VAL, 8
NIC_NUMUBER_VAL:
	.zero	8
	.globl	HELP_CMD
	.section	.rodata
	.type	HELP_CMD, @object
	.size	HELP_CMD, 7
HELP_CMD:
	.string	"--help"
	.align 8
.LC0:
	.string	"Error occuured unexpected arguments \n type --help for more info...  "
	.align 8
.LC1:
	.string	"example   \t ./o<space><nic_number>"
	.text
	.globl	main
	.type	main, @function
main:
.LFB6:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movq	%rsi, -16(%rbp)
	cmpl	$2, -4(%rbp)
	jg	.L2
	cmpl	$1, -4(%rbp)
	jne	.L3
.L2:
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$1, %eax
	jmp	.L4
.L3:
	cmpl	$2, -4(%rbp)
	jne	.L5
	movq	-16(%rbp), %rax
	addq	$8, %rax
	movq	(%rax), %rax
	leaq	HELP_CMD(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	strcasecmp@PLT
	testl	%eax, %eax
	jne	.L5
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$0, %eax
	jmp	.L4
.L5:
	movq	-16(%rbp), %rax
	addq	$8, %rax
	movq	(%rax), %rax
	movl	$12, %edx
	movq	%rax, %rsi
	leaq	NIC_NUMBER(%rip), %rax
	movq	%rax, %rdi
	call	strncpy@PLT
	leaq	NIC_NUMBER(%rip), %rax
	movq	%rax, %rdi
	call	atol@PLT
	movq	%rax, NIC_NUMUBER_VAL(%rip)
	movl	$0, %eax
.L4:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	main, .-main
	.ident	"GCC: (Debian 12.2.0-14) 12.2.0"
	.section	.note.GNU-stack,"",@progbits
