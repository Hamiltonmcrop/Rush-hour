li t0 0x12345678
addi sp sp -4

sw t0 0(sp)
lw t1 0(sp)

sh t0 0(sp)
lw t1 0(sp)
sh t0 1(sp)
lw t1 0(sp)
sh t0 2(sp)
lw t1 0(sp)

sb t0 0(sp)
lw t1 0(sp)
sb t0 1(sp)
lw t1 0(sp)
sb t0 2(sp)
lw t1 0(sp)
sb t0 3(sp)
lw t1 0(sp)

addi sp sp 4
