section .text
global ft_strdup

extern ft_strlen
extern malloc

ft_strdup:
    mov r8, rdi
    call ft_strlen WRT ..plt

    inc rax
    mov rdi, rax
    push r8
    call malloc WRT ..plt
    pop r8
    test rax, rax
    jz .end
    mov r9, rax

.loop:
    mov cl, byte [r8]
    mov byte [r9], cl
    add r8, 1
    add r9, 1
    test cl, cl
    jnz .loop
    mov byte [r9], 0
    ret

.end:
    ret