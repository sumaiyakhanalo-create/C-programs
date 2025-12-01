#include <stdio.h>

int main() {
    int arr[] = {10, 25, 7, 50, 3};
    int n = 5, max = arr[0], min = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }

    printf("Max = %d\nMin = %d", max, min);
    return 0;
}
