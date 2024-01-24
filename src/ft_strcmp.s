section .text
global ft_strcmp

ft_strcmp:
    mov al, [rdi]
    cmp al, [rsi]
    jne .end
    inc rdi
    inc rsi
    test al, al
    jnz ft_strcmp

.end:
    movzx rax, byte [rdi]
    movzx rdx, byte [rsi]
    sub rax, rdx
    ret