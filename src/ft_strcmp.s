section .text
global ft_strcmp

ft_strcmp:
    mov al, byte [rdi]
    mov bl, byte [rsi]
    cmp al, 0
    je .end
    cmp bl, 0
    je .end
    cmp al, bl
    jne .end
    inc rdi
    inc rsi
    jmp ft_strcmp

.end:
    movzx rax, byte [rdi]
    movzx rdx, byte [rsi]
    sub rax, rdx
    ret