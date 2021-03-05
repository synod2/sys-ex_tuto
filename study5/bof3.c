#include<stdio.h>

//gcc -o bof3 bof3.c -m32 -mpreferred-stack-boundary=2 -fno-stack-protector -static

void shell(){
    execve("/bin/sh",NULL,NULL);
}

void show(){
    printf("look at this!\n");
}

int main(){
    int (*b)();
    char a[10]={0,};    
    b = (int(*)()) show;
    printf("input your string :");
    scanf("%s",a);
    b();    
}