#include <stdio.h>

int main(){
    char n[L_tmpnam]; FILE *f;
    tmpnam(n);
    f=fopen(n,"w+");
    fprintf(f,"Hello!"); rewind(f);
    int c; while((c=fgetc(f))!=EOF) putchar(c);
    fclose(f);
    return 0;
}