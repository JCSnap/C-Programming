# messages.asm
  .data 
str: .asciiz "the answer = "
  .text

main: 
    li   $v0, 5    # system call code for read_int
    syscall        # read an integer from the keyboard
    move $t0, $v0  # move the integer to be printed into $a0

    li   $v0, 4    # system call code for print_string
    la   $a0, str  # address of string to print
    syscall        # print the string

    move $a0, $t0  # move the integer to be printed into $a0
    li   $v0, 1    # system call code for print_int
    syscall        # print the integer
    
    li   $v0, 10   # system call code for exit
    syscall        # terminate program
