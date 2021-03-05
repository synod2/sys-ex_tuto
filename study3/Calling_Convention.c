#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void my_strcmp(char *ptr,char *x){
    strcpy(ptr,x);
    printf("%s\n",ptr);
}

int main(int argc, char **argv){
    char *ptr = (char *)malloc(20);
    char *argv_ptr = argv[1];

    if(strlen (argv_ptr) < 20)
        my_strcmp(ptr,argv_ptr);
    return 0;
}