#include <stdio.h>
#include <sys/stat.h>

int main(){
    if(chmod("file.txt", 0444)==0)  
        printf("File is now read-only");
    else
        printf("Error");
    return 0;
}