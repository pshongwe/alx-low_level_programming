section .data
    hello db 'Hello, Holberton', 0
    newline db 10, 0  ; Definition of newline as '\n'

section .data
    format db '%s', 0

section .text
    global main
    extern printf

main:
    sub rsp, 8  ; Align the stack
    mov rdi, format
    mov rsi, hello
    call printf wrt ..plt
    mov rdi, format
    mov rsi, newline
    call printf wrt ..plt
    add rsp, 8  ; Restore the stack
    ret

