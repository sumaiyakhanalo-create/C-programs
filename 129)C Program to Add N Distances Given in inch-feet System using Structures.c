#include <stdio.h>

struct Distance { int feet; float inch; };

int main() {
    int n; 
    scanf("%d", &n);
    struct Distance d, sum = {0,0};

    for(int i=0;i<n;i++){
        scanf("%d %f", &d.feet, &d.inch);
        sum.feet += d.feet;
        sum.inch += d.inch;
    }
    sum.feet += (int)(sum.inch/12);
    sum.inch = (int)sum.inch % 12 + (sum.inch - (int)sum.inch);

    printf("%d feet %.2f inch", sum.feet, sum.inch);
    return 0;
}