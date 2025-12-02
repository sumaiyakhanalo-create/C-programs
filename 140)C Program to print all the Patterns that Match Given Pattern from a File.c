#include <stdio.h>
#include <string.h>

int main(){
    char line[100], pattern[50];
    FILE *f=fopen("file.txt","r");
    if(!f){printf("Error"); return 1;}

    scanf("%s", pattern);
    while(fgets(line,sizeof(line),f))
        if(strstr(line,pattern)) printf("%s", line);

    fclose(f);
    return 0;
}