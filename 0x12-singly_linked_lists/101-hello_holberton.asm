section .data
  msg: db "Hello, Holberton!", 10
  msglen: equ $ - msg

section .text
global main

extern write
extern exit

main:
  mov rax, 1        ; write(
  mov rdi, 1        ;   STDOUT_FILENO,
  mov rsi, msg      ;   "Hello, Holberton!\n",
  mov rdx, msglen   ;   sizeof("Hello, Holberton!\n")
  syscall           ; );

  mov rax, 60       ; exit(
  xor rdi, rdi      ;   EXIT_SUCCESS
  syscall           ; );
