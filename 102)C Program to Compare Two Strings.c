#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];
    gets(a);
    gets(b);

    int cmp = strcmp(a, b);
    if(cmp == 0) printf("Equal");
    else if(cmp < 0) printf("a < b");
    else printf("a > b");

    return 0;
}