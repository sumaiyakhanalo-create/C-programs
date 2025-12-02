#include <stdio.h>
#include <time.h>

int main() {
    time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    int hour = tm->tm_hour;
    printf("%02d:%02d:%02d %s\n", hour==0||hour==12?12:hour%12, tm->tm_min, tm->tm_sec, hour<12?"AM":"PM");
    return 0;
}