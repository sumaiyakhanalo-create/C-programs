#include <stdio.h>
#include <stdlib.h>

int main() {
    char oct[20];
    int dec;

    gets(oct);
    dec = strtol(oct, NULL, 8);
    printf("%d", dec);

    return 0;
}