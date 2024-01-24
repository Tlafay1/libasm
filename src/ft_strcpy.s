section .text
global ft_strcpy

ft_strcpy:
    mov rax, rdi

    test rsi, rsi
    jz .empty

.loop:
    mov cl, byte [rsi]
    mov byte [rdi], cl
    add rdi, 1
    add rsi, 1
    test cl, cl
    jnz .loop
    ret

.empty:
    mov byte [rdi], 0
    ret