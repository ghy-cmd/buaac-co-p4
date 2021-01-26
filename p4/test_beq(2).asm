################## test ori  ####################################
ori $a0, $0, 123			# a0 = 123
ori $a1, $a0, 123		# a1 = a0 | 123 = 123
ori $a2, $0, 456			# a1 = 456
#ori $a2, 234
################# test lui ##################
lui $t1, 0xffff
ori $t1, $t1, 0xffff
################ test beq ############
beq $a0, $a2, test1
lui $t2, 0xffff
ori $t2, $t2, 0xffff
ori $v0, $0, 0x0000
beq $t1, $t2, test_jump

test1:
sw $t1, 0($v0)
test_jump:
ori $a3, 0xf234
sw $a3, 0($v0)
