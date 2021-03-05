.global main

main : 
	mov $0xb, %eax
	mov $sh, %ebx
 	mov $0x0, %ecx
	mov $0x0, %edx
	int $0x80 
.data
sh:
	.string "/bin/sh"
