#include <stdio.h>

int passwd = 300;

int main(){
	int a;
	passwd ^= 123;
	passwd *= 2;
	

	printf("what is password??\n");

	scanf("%d",&a);
	if(a==passwd)
		printf("correct!\n");
	else
		printf("wrong answer!\n");
	return 0;
}
