.global main
main : 
    mov $3, %eax
    mov $0, %ebx
    mov $name, %ecx
    mov $4, %edx
    int $0x80

    mov $5, %eax
    mov $name, %ebx
    mov $0, %ecx
    mov $20, %edx
    int $0x80

    mov %eax, %ebx

    mov $3, %eax    
    mov $str, %ecx
    mov $20, %edx
    int $0x80

    mov $4, %eax    
    mov $1 , %ebx
    mov $str, %ecx
    mov $20, %edx
    int $0x80

.data 
name:
    .string ""
str:
    .string ""
