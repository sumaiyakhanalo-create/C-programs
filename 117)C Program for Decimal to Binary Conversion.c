include <stdio.h>

int main() {
    int n;
    printf("Enter decimal: ");
    scanf("%d", &n);

    printf("Binary = ");
    for (int i = 31; i >= 0; i--)
        if (n & (1 << i)) { printf("1"); }
        else { printf("0"); }

    return 0;
}