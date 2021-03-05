#include <stdio.h>
#include <stdlib.h>
int main(int argc,char **argv){
	if(argc!=3){
		printf("%s [Parameter] [Parameter]\n",argv[0]);
		exit(0);
	}
	else{
		printf("%s %s %s\n",argv[0],argv[1],argv[2]);
	}
	
	return 0;
}
