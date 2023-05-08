.data
N:
.word 5
M:
.word 4

matrix:
.word 6,2,7,-5,9
.word -2,1,0,10,-23
.word 9,8,1,4,9
.word 5,5,5,2,0

result:
.word 0
.text

main:
la a2, N
la a3, M
la a4, matrix
la a5, result

lw t1, 0(a4)
lw t2, 4(a4)

mv a1, t1

blt t2, t1, 1f

mv a1, t2

1:

li t3, 19 # number of elements 
li t4, 0 # iteretion var

addi a4, a4, 8

loop:
addi t4, t4, 1 # t4++ 
lw t1, 0(a4) # t1 = arr[i]
addi a4, a4, 4

blt a1, t1, 1f

mv a1, t1
1:

blt t4, t3, loop

sw a1, 0(a5)

print:
addi a0, x0, 1 # print_int ecall
ecall