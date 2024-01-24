section .text
global ft_strlen

ft_strlen:
    xor rcx, rcx    
    test rdi, rdi
    jz .end

.loop:
    mov al, [rdi+rcx]
    test al, al
    jz .end
    inc rcx
    jmp .loop

.end:
    mov rax, rcx
    ret