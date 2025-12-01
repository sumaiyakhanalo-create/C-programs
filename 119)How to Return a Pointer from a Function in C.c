#include <stdio.h>

int* getNumber() {
    static int x = 50;   
    return &x;
}

int main() {
    int *p = getNumber();
    printf("%d", *p);
    return 0;
}