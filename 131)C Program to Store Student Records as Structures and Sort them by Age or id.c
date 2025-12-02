#include <stdio.h>
#include <string.h>

struct S{char n[50];int id,age;}s[3],t;

int main(){
    for(int i=0;i<3;i++) scanf("%s%d%d",s[i].n,&s[i].id,&s[i].age);

    for(int i=0;i<2;i++) for(int j=i+1;j<3;j++)
        if(s[i].age > s[j].age){ t=s[i]; s[i]=s[j]; s[j]=t; }

    for(int i=0;i<3;i++) printf("%s %d %d\n",s[i].n,s[i].id,s[i].age);

    return 0;
}