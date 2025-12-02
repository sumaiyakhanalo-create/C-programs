#include <stdio.h>
#include <time.h>

int main() {
    time_t t = time(NULL);
    struct tm *tm = localtime(&t);

    printf("DD-MM-YYYY: %02d-%02d-%04d\n", tm->tm_mday, tm->tm_mon+1, tm->tm_year+1900);
    printf("MM/DD/YYYY: %02d/%02d/%04d\n", tm->tm_mon+1, tm->tm_mday, tm->tm_year+1900);
    printf("YYYY.MM.DD: %04d.%02d.%02d\n", tm->tm_year+1900, tm->tm_mon+1, tm->tm_mday);

    return 0;
}