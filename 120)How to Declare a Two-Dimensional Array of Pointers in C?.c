#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30, d = 40;

    int *arr[2][2] = { {&a, &b}, {&c, &d} };  

    printf("%d", *arr[0][1]); 
    return 0;
}