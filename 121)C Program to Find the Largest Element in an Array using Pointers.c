#include <stdio.h>

int main() {
    int n, a[100];
    scanf("%d", &n);

    for(int i=0;i<n;i++) scanf("%d",&a[i]);

    int *p=a, max=*p;
    for(int i=1;i<n;i++) if(p[i]>max) max=p[i];

    printf("%d", max);
    return 0;
}