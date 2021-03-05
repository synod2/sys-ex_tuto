.global main
main : 
    mov $3, %eax
    mov $0, %ebx
    mov $str, %ecx
    mov $20, %edx
    int $0x80

    mov $4, %eax
    mov $1, %ebx
    mov $str, %ecx
    mov $20, %edx
    int $0x80

.data 
str:
    .string ""
