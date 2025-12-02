#include <stdio.h>
int main(){
    FILE *f1=fopen("f1.txt","r"),*f2=fopen("f2.txt","r");
    if(!f1||!f2){printf("Error");return 1;}
    int c1,c2,pos=0;
    while((c1=fgetc(f1))!=EOF && (c2=fgetc(f2))!=EOF){pos++; 
    if(c1!=c2) printf("Mismatch at %d: %c!=%c\n",pos,c1,c2);}
    if(fgetc(f1)!=EOF || fgetc(f2)!=EOF) printf("Different lengths\n");
    fclose(f1); fclose(f2);
    return 0;
}