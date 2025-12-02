#include <stdio.h>

struct C{float r,i;} ;

struct C add(struct C a, struct C b){ a.r+=b.r; a.i+=b.i; return a; }

int main(){
    struct C x,y,s;
    scanf("%f%f%f%f",&x.r,&x.i,&y.r,&y.i);
    s=add(x,y);
    printf("%.2f+%.2fi",s.r,s.i);
    return 0;
}