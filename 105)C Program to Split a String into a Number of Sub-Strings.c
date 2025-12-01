#include <stdio.h>
#include <string.h>

int main() {
    char s[200], *p;

    gets(s);

    p = strtok(s, " ");
    while (p) {
        printf("%s\n", p);
        p = strtok(NULL, " ");
    }

    return 0;
}