ori $a1, $0, 1234
ori $a2, $0, 4
ori $a3, $0, 4
beq $a2, $a3, test_branch
	ori $a0, 0x0000			# branch1
	sw $a1, 4($a0)
	sw $a2, 8($a0)
	lw $t1, 4($a0)
	lw $t2, 8($a0)
test_branch:
	addu $t3, $t1, $t2
	subu $t4, $a1, $a2
