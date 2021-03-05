#include<stdio.h>
#include<string.h>
//gcc -o bof4 bof4.c -m32 -mpreferred-stack-boundary=2 -fno-stack-protector -static

void shell(){
    execve("/bin/sh",NULL,NULL);
}

void show(){
    printf("look at this!\n");
}

int main(int argc ,char ** argv){
    int (*b)();
    char a[10]={0,};    
    b = (int(*)()) show;
    strcpy(a,argv[1]);
    printf("%s\n",a);
    b();    
}