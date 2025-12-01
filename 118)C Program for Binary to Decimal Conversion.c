#include <stdio.h>
#include <math.h>

int main() {
    long bin;
    int dec = 0, base = 1;

    printf("Enter binary: ");
    scanf("%ld", &bin);

    while (bin > 0) {
        int last = bin % 10;
        dec += last * base;
        base *= 2;
        bin /= 10;
    }

    printf("Decimal = %d", dec);
    return 0;
}