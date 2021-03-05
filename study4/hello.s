.global main
main : 
    mov $4, %eax
    mov $1, %ebx
    mov $hello, %ecx
    mov $15, %edx
    int $0x80

    mov $1, %eax
    int $0x80
.data 
hello:
    .string "Hello World!\n"
