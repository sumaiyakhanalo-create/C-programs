#include <stdio.h>

int main(){
    FILE *src=fopen("source.txt","r"), *dest=fopen("dest.txt","w");
    if(!src||!dest){printf("Error"); return 1;}
    int c;
    while((c=fgetc(src))!=EOF) fputc(c,dest);
    fclose(src); fclose(dest);
    return 0;
}