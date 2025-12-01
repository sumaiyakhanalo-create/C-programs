#include <stdio.h>

int main() {
    float f;
    char s[50];
    scanf("%f", &f);
    sprintf(s, "%f", f);
    printf("%s", s);
    return 0;
}