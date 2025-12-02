#include <stdio.h>
#include <string.h>

struct S{char n[50];int r;float m;}s[3],t;

int main(){
    for(int i=0;i<3;i++) scanf("%s%d%f",s[i].n,&s[i].r,&s[i].m);
    for(int i=0;i<2;i++) for(int j=i+1;j<3;j++) if(strcmp(s[i].n,s[j].n)>0){t=s[i];s[i]=s[j];s[j]=t;}
    for(int i=0;i<3;i++) printf("%s %d %.2f\n",s[i].n,s[i].r,s[i].m);
}