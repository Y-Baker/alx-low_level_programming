section .data
    message db "Hello, Holberton", 0xA

section .text
    global _start

_start:
    ; write message to stdout
    mov eax, 4
    mov ebx, 1
    mov ecx, message
    mov edx, 16
    int 0x80

    ; exit
    mov eax, 1
    xor ebx, ebx
    int 0x80