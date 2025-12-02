#include <stdio.h>

int main() {
    int a = 10, b = 0;

    if(b == 0)
        printf("Runtime Error: Division by zero!\n");
    else
        printf("Result = %d\n", a / b);

    return 0;
}