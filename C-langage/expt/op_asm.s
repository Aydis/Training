	.file	"op_asm.c"
	.option nopic
	.attribute arch, "rv32i2p1"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
	.align	2
	.globl	aydis
	.type	aydis, @function
aydis:
	addi	sp,sp,-32
	sw	s0,28(sp)
	addi	s0,sp,32
	li	a5,127
	sw	a5,-20(s0)
	li	a5,4
	sw	a5,-24(s0)
	lw	a4,-20(s0)
	lw	a5,-24(s0)
	sgt	a5,a4,a5
	andi	a5,a5,0xff
	sw	a5,-28(s0)
	lw	a4,-20(s0)
	lw	a5,-24(s0)
	slt	a5,a4,a5
	seqz	a5,a5
	andi	a5,a5,0xff
	sw	a5,-28(s0)
	lw	a4,-20(s0)
	lw	a5,-24(s0)
	slt	a5,a4,a5
	andi	a5,a5,0xff
	sw	a5,-28(s0)
	lw	a4,-20(s0)
	lw	a5,-24(s0)
	sgt	a5,a4,a5
	seqz	a5,a5
	andi	a5,a5,0xff
	sw	a5,-28(s0)
	lw	a4,-20(s0)
	lw	a5,-24(s0)
	sub	a5,a4,a5
	seqz	a5,a5
	andi	a5,a5,0xff
	sw	a5,-28(s0)
	lw	a4,-20(s0)
	lw	a5,-24(s0)
	sub	a5,a4,a5
	snez	a5,a5
	andi	a5,a5,0xff
	sw	a5,-28(s0)
	nop
	lw	s0,28(sp)
	addi	sp,sp,32
	jr	ra
	.size	aydis, .-aydis
	.ident	"GCC: (13.2.0-11ubuntu1+12) 13.2.0"
