# arrayCount.asm
  .data 
arrayA: .word 1, 2, 3, 4, 5, 6, 7, 8   # arrayA has 5 values
count:  .word 999 # dummy value

  .text
main:
    # code to setup the variable mappings
    la $t0, arrayA
    la $t1, count
    li $t8, 0

    # code for reading in the user value X
    li $v0, 5
    syscall
    move $t2, $v0

    # generate mask from input value
    sub $t5, $t2, 1

    # code for counting multiples of X in arrayA
    li $t3, 0
loop:
    lw $t4, 0($t0)
    and $t4, $t4, $t5
    bne $t4, $zero, next_element
    addi $t8, $t8, 1
    sw $t8, 0($t1)
next_element:
    addi $t3, $t3, 4
    add $t0, $t0, 4
    bne $t3, 32, loop
    sw $t8, 0($t1)

    # code for printing result
    lw $a0, 0($t1)
    li $v0, 1
    syscall

    # code for terminating program
    li  $v0, 10
    syscall
