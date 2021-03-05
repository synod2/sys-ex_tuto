#include <stdio.h>

int main()
{
	int a=123;
	int b=10;
	int result;
	int cnt;

	for(cnt=0;cnt<5;cnt++)
	{
		result = a^=b;
		b*=2;

		result = 0;
	
	}
	printf("a is ?\n");
	printf("b is ?\n");
	return 0;

}
