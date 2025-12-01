#include <stdio.h>

int main() {
    double d;
    char s[50];
    scanf("%lf", &d);
    sprintf(s, "%lf", d);
    printf("%s", s);
    return 0;
}