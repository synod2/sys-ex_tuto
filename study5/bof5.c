#include<stdio.h>
#include<string.h>
//gcc -o bof5 bof5.c -m32 -mpreferred-stack-boundary=2 -fno-stack-protector -static -z execstack

char code[];

int main(int argc ,char ** argv){
    char a[10]={0,};    
    printf("input your code :");
    gets(code);
    printf("addr : %x\n",&code);
    printf("input your string :");
    scanf("%s",a);
    printf("your input : %s",a);
}