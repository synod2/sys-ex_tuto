.global main
main :
	mov $4, %eax 
	push $0x61616363
	push $0x64646666
	push $0x68686800
	mov $1, %ebx
	mov %esp, %ecx
	mov $12, %edx
	int $0x80 


