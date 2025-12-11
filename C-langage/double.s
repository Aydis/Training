	.file	"double.c"
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
	lui	a5,%hi(.LC0)
	lw	a4,%lo(.LC0)(a5)
	lw	a5,%lo(.LC0+4)(a5)
	sw	a4,-24(s0)
	sw	a5,-20(s0)
	li	a5,0
	mv	a0,a5
	lw	s0,28(sp)
	addi	sp,sp,32
	jr	ra
	.size	aydis, .-aydis
	.section	.rodata
	.align	3
.LC0:
	.word	-1786706395
	.word	1079962435
	.ident	"GCC: (13.2.0-11ubuntu1+12) 13.2.0"
