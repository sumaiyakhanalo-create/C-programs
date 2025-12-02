#include <stdio.h>
#include <time.h>

int main() {
    time_t t = time(NULL);

    struct tm *local = localtime(&t);
    struct tm *gmt = gmtime(&t);

    printf("Local Time: %02d:%02d:%02d\n", local->tm_hour, local->tm_min, local->tm_sec);
    printf("GMT Time:   %02d:%02d:%02d\n", gmt->tm_hour, gmt->tm_min, gmt->tm_sec);

    return 0;
}