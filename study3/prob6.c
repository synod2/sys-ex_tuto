#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
	int a;
	srand(time(NULL));
	a=rand();
	printf("random value: %d\n",a);
	if(a&1){
		printf("nono~");
	}
	else{
		printf("Yes!");
	}
	return 0;
}
