section .data
	hello db "Hello, Holberton",10 ; The string to be printed
format db "%s",0             ; The format string for printf

section .text
	global _start
extern printf

_start:
push hello                  ; Push the address of the string onto the stack
	push format                 ; Push the address of the format string
	call printf                ; Call the printf function

	; Exit the program
    mov rax, 60                 ; syscall number for exit (60)
    xor rdi, rdi                ; Exit status: 0
    syscall

