#include <stdio.h>
//gcc -o shell shell.c -m32 -mpreferred-stack-boundary=2 -fno-stack-protector
char sh[] = "/bin/sh";

int main(){
    execve(sh,0,0);
    return 0;
}