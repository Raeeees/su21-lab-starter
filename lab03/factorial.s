.globl factorial

.data
n: .word 8

.text
main:
    la t0, n
    lw a0, 0(t0)
    jal ra, factorial

    addi a1, a0, 0
    addi a0, x0, 1
    ecall # Print Result

    addi a1, x0, '\n'
    addi a0, x0, 11
    ecall # Print newline
    
    addi a0, x0, 10
    ecall # Exit

factorial:
    # YOUR CODE HERE
    li x2,1 
    li x5,1
  LOOP:
    blt a0,x2, exit
    mul x5,x5, x2   
    addi x2,x2,1
    j LOOP 
    exit:
    mv a0,x5
    jr ra