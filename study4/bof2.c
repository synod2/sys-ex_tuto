#include<stdio.h>

//gcc -o bof2 bof2.c -m32 -mpreferred-stack-boundary=2 -fno-stack-protector

void flag(){
    printf("you got the answer!");    
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