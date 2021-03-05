#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main(int argc,char **argv){
        FILE *fp;
        char *ptr;
        char list[256];


        if(argc<2){
                puts("Usage : ./prob9 [passwd]");;

        }
        if(time(NULL)==atoi(argv[1])){
                printf("passwd = %d\n",atoi(argv[1]));
                fp=fopen("key_09.txt","r"); 
                fscanf(fp,"%s",list);
                ptr = (char *)malloc(strlen(list)+1);
                strcpy(ptr,list);
                printf("%s",ptr);
        }       
        else{
                puts("Try Again~~!");;
        }       
        return 0;
}
