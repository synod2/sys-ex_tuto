.global main

main : 
	mov $0xb, %eax
	push $0x0068732f
	push $0x6e69622f
	mov %esp, %ebx
 	mov $0x0, %ecx
	mov $0x0, %edx
	int $0x80 
