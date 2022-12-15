.globl reset
reset:
    ldr sp, =stack_top
    bl main
exit: 
    b exit
