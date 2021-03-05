#include <stdio.h>

char string[] = "welcome to system exploit!\n";
void func(int x, int y){
	printf("x+y = %d \n",x+y);
}

int main(){
	printf("%s",string);
	func(10,5);

}


