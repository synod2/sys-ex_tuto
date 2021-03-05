#include<stdio.h>
//gcc -o bof1 bof1.c -m32 -mpreferred-stack-boundary=2 -fno-stack-protector

int main(){
    int b=777;
    char a[10]={0,};    
    printf("input your string :");
    scanf("%s",a);
    printf("is this yours? %s\n",a);
    printf("or is this ? %d\n",b);
}