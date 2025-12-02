#include <stdio.h>
#include <stdlib.h>

struct S{int n; int a[];};

int main(){
    int sz=5;
    struct S *p=malloc(sizeof(struct S)+sz*sizeof(int));
    p->n=sz;
    for(int i=0;i<sz;i++) p->a[i]=i+1;
    for(int i=0;i<sz;i++) printf("%d ",p->a[i]);
    free(p);
    return 0;
}