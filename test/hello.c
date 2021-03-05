#include <stdio.h>

int g=10;

int main(){
int a=10;
int * b;
int c;
int d;
	c = a;
	b = &g;
	d = &a;
	
	printf("hello world!");
	return 0;
}
