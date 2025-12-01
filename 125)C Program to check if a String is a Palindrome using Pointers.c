#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);

    char *start = str, *end = str + strlen(str) - 1;
    int flag = 1;

    while(start < end)
        if(*start++ != *end--) { flag = 0; break; }

    printf(flag ? "Palindrome" : "Not Palindrome");
    return 0;
}