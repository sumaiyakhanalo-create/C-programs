#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main() {
    while(1){
        time_t t = time(NULL);
        struct tm *tm = localtime(&t);
        system("clear"); 
        printf("%02d:%02d:%02d\n", tm->tm_hour, tm->tm_min, tm->tm_sec);
        sleep(1);
    }
    return 0;
}