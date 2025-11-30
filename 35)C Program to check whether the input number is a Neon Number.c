#include <stdio.h>

int main() {
    int num, square, sum = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num; // step 1: square of the number

    // step 2: sum of digits of the square
    while (square != 0) {
        rem = square % 10;
        sum += rem;
        square /= 10;
    }

    // step 3: check if sum == original number
    if (sum == num)
        printf("%d is a Neon Number.", num);
    else
        printf("%d is not a Neon Number.", num);

    return 0;
}
