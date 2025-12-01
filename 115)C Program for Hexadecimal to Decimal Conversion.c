#include <stdio.h>
#include <stdlib.h>

int main() {
    char hex[20];
    int dec;

    gets(hex);
    dec = strtol(hex, NULL, 16);
    printf("%d", dec);

    return 0;
}