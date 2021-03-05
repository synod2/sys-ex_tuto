#include <stdio.h>
#include <string.h>

void func(char *arr){
        int num1,num2,num3;
        char arr2;
        num3=strlen(arr);
        for(num1=0;num1<num3;num1++){
                for(num2=num1;num2<num3;num2++){
                        if(!(*(arr+num1)<=*(arr+num2))){
                                arr2=*(arr+num2);
                                *(arr+num2)=*(arr+num1);
                                *(arr+num1)=arr2;
                        }
                }
        }
}
int main(){
        char list[20];
        printf("INPUT ->");
        scanf("%s",list);
        func(list);
        puts(list);
        return 0;
}
