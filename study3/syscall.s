.global main
main : 
    mov $4, %eax
    mov $1, %ebx
    mov $str, %ecx
    mov $12, %edx
    int $0x80
    
.data
str:
    .string "hello world\n"