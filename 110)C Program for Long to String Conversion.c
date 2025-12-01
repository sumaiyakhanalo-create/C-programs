#include <stdio.h>

int main() {
    long n;
    char s[50];

    scanf("%ld", &n);
    sprintf(s, "%ld", n);
    printf("%s", s);

    return 0;
}        