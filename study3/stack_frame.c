#include <stdio.h>
void func(){
        int x;
        printf("=======func stack frame=======\n");
        printf("func stack eip's addr = %p\n",&x+2);
        printf("func stack ebp's addr = %p\n",&x+1);
        printf("func stack x's addr =   %p\n",&x);

}
int main(){
        int y=2;
        int x=1;        
        printf("=======main stack frame=======\n");
        printf("main stack eip's addr = %p\n",&x+2);
        printf("main stack ebp's addr = %p\n",&x+1);
        printf("main stack x's addr =   %p\n",&x);
        printf("main stack y's addr =   %p\n",&y);
        func();
}
