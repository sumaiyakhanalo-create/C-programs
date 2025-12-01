#include <stdio.h>
#include <string.h>

int main() {
    char a[200], b[100];
    int pos, i, j;

    gets(a);
    gets(b);
    scanf("%d", &pos);

    int len_a = strlen(a), len_b = strlen(b);

    for (i = len_a - 1; i >= pos; i--) 
        a[i + len_b] = a[i];

    for (i = pos, j = 0; j < len_b; i++, j++) 
        a[i] = b[j];

    a[len_a + len_b] = '\0';
    printf("%s", a);
    return 0;
}