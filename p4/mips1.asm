ori $10,$0,100
ori $11,$0,5
ori $1,$0,1
ori $2,$0,1
ori $24,$0,2
loop:
addu $2,$2,$1
subu $10,$10,$1
sw $2,0($0)
sw $10,4($0)
lw $3,0($0)
lw $28,4($0)
lui $27,1024
beq $2,$24,loop

jal lop
nop
lop:
j name
addu $2,$2,1
jr $ra

name:
sw $2,0($0)
