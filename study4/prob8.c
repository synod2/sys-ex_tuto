#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
        char *x;
        FILE *fp1;
        FILE *fp2;
        int a;
        int b;
        if (argc <= 2){
                puts("Usage:./prob input_file.txt output_file.txt");
                exit(1);
        }
        fp1 = fopen(argv[1], "rb");
        fp2 = fopen(argv[2], "wb");
        fseek(fp1, 0, 2);
        a = ftell(fp1);
        fseek(fp1, 0, 0);
        b = fgetc(fp1);
        if (!feof(fp1)){
                fputc(b, fp2);
                x = (char*)malloc(a);
                while (b = fgetc(fp1), !feof(fp1)) {
                        b = fputc(b, fp2);
                        fread(x, 1, 1, fp1);
                        fwrite(x, 1, 1, fp2);
                }
                puts("gogo~");
        }
        fclose(fp1);
        fclose(fp2);
        free(x);
        return 0;
}
