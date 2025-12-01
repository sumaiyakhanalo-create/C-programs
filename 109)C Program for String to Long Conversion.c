#include <stdio.h>
#include <stdlib.h>

int main() {
    char s[50];
    long n;

    gets(s);
    n = strtol(s, NULL, 10);
    printf("%ld", n);

    return 0;
}