section .data
    hello db 'Hello, Holberton', 0
    newline db 10, 0  ; Definition of newline as '\n'

section .data
    format db '%s', 0

section .text
    global main
    extern printf

main:
    push rbp
    mov rdi, format
    mov rsi, hello
    call printf wrt ..plt  ; Use "call printf wrt ..plt" instead of "call printf"
    mov rdi, format
    mov rsi, newline
    call printf wrt ..plt  ; Use "call printf wrt ..plt" instead of "call printf"
    pop rbp
    ret

